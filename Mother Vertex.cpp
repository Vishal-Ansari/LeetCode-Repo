class Solution {
public:
    void dfs(int node, vector<int> adj[], vector<bool>& vis) {
        vis[node] = true;
        for (auto it : adj[node]) {
            if (!vis[it]) dfs(it, adj, vis);
        }
    }

    int findMotherVertex(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);
        int motherVertex = -1; // Initialize as -1

        // Find a candidate mother vertex
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, adj, vis);
                motherVertex = i;
            }
        }

        // Check if the candidate mother vertex can reach all vertices
        fill(vis.begin(), vis.end(), false);
        dfs(motherVertex, adj, vis);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) return -1; // No mother vertex found
        }

        return motherVertex;
    }
};
