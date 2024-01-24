class Solution {
  public:
    bool isCycle(vector<vector<int>>& adj, vector<int>& vis, int n, int m, int node, int parent) {
        vis[node]=1;
        for (auto newNode : adj[node]) {
            if (!vis[newNode]) {
                if (!isCycle(adj, vis, n, m, newNode, node)) {
                    return false;
                }
            } else if (newNode != parent) {
                return false;
            }
        }
        return true;
    }

    int isTree(int n, int m, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n, vector<int>());
        for (int i = 0; i < m; i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
    
        vector<int> vis(n,0);
        bool res = isCycle(adj, vis, n, m, 0, -1);
        for(int i=0;i<n;i++){
            if(!vis[i]) return false;
        }
        return res;
    }
};
