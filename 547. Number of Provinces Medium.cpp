class Solution {
public:
    void dfs(int node ,vector<vector<int>>& adj, vector<bool> &visited){
        visited[node]=true;
        for(auto v: adj[node]){
            if(!visited[v])
            dfs(v,adj,visited);
        }
    }

    int findCircleNum(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<vector<int>> adj(n, vector<int>());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(arr[i][j])
                adj[i].push_back(j);
            }
        }
        vector<bool> visited(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!visited[i])
            {
                dfs(i,adj,visited);
                ans++;
            }
        }
        return ans;
    }
};
