class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto it : edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
    
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int distance[n+1];
        int parent[n+1];
        for(int i=0;i<n+1;i++){
            distance[i]=INT_MAX;
        }
        
        for(int i=1;i<n+1;i++){
            parent[i]=i;
        }
        distance[1]=0;
        pq.push({0,1});
        while(!pq.empty()){
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto it : adj[node]){
                int edgeWeight = it.second;
                int adjNode = it.first;
                if(dist+edgeWeight<distance[adjNode]){
                    distance[adjNode] = dist+edgeWeight;
                    pq.push({distance[adjNode],adjNode});
                    parent[adjNode] = node;
                }
            }
        }
        vector<int> path;
        
        if(distance[n]==INT_MAX){
            path.push_back(-1);
            return path;
        }
        int i = n;
        while (i != 1) {
        path.push_back(i);
         i = parent[i];
         }
        path.push_back(1);
        reverse(path.begin(), path.end());
        path.insert(path.begin(), distance[n]);
        return path;
    }
};
