
class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges){

        vector<int> res(n, -1), v1(n, 0), v2(n, 0);
        vector<vector<pair<int, int>>> vp(n);
        queue<pair<int, int>> q;

        for(auto &it : red_edges) vp[it[0]].push_back({it[1], 1});
        for(auto &it : blue_edges) vp[it[0]].push_back({it[1], 2});

        res[0] = 0;
        v1[0] = 1;
        v2[0] = 1;
        int temp = 1;

        for(auto &it : vp[0])
        {
            q.push(it);
            if(res[it.first] == -1) res[it.first] = temp;
        }

        while(!q.empty())
        {
            int len = q.size();
            temp++;
            for(int i=0; i<len; ++i)
            {
                auto val = q.front();
                q.pop();
                if(val.second == 1) v1[val.first] = 1;
                else v2[val.first] = 1;

                for(auto &it : vp[val.first])
                {
                    if(val.second == 1 && (v2[it.first] || it.second==1)) continue;
                    if(val.second == 2 && (v1[it.first] || it.second==2)) continue;
                    q.push(it);                      
                    if(res[it.first] == -1) res[it.first] = temp;
                }
            }
        }
        return res;
    }
};












const int inf = 1e7;
class Solution {
    public:
   
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>> &redEdges, vector<vector<int>> &blueEdges){

        vector<int> dis(n , -1);
        vector<pair<int, int>> adj[n + 1];
        for (auto vec : redEdges){
            adj[vec[0]].push_back({vec[1], 1});
        }
        for (auto vec : blueEdges){
            adj[vec[0]].push_back({vec[1], 2});
        }
        queue<vector<int>> q;
        q.push({0, 0, -1});
        while (q.size() > 0){
            auto currVec = q.front();
            q.pop();
            int currv = currVec[0], edgeColor = currVec[2];
            if (dis[currv] == -1){
                dis[currv] = currVec[1];
            }
            for (auto &childPair : adj[currv]){
                int childV = childPair.first, edgeColorOfChild = childPair.second;
                if (childV != -1 && (edgeColor == -1 || edgeColor != edgeColorOfChild)){
                    q.push({childV, currVec[1] + 1, edgeColorOfChild});
                    childPair.first = -1;
                }
            }
        }
        return dis;
    }
};
