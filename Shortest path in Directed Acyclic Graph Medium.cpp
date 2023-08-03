class Solution {
  private:
    void dfs(int node, vector < pair < int, int >> adj[],int vis[], stack < int > & st) {
      vis[node] = 1;
      for (auto it: adj[node]) {
        int v = it.first;
        if (!vis[v]) {
          dfs(v, adj, vis, st);
        }
      }
      st.push(node);
    }
  public:
    vector < int > shortestPath(int N, int M, vector < vector < int >> & edges) {

      vector < pair < int, int >> adj[N];
      for (int i = 0; i < M; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back({v, wt}); 
      }
    // toposort
      int vis[N] = {0};
      stack < int > st;
      for (int i = 0; i < N; i++) {
        if (!vis[i]) {
            dfs(i, adj, vis, st);
        }
      }
     // distance calculation
      vector < int > dis(N);
      for (int i = 0; i < N; i++) {
        dis[i] = 1e9;
      }

      dis[0] = 0;
      while (!st.empty()) {
        int node = st.top();
        st.pop();

        for (auto it: adj[node]) {
          int v = it.first;
          int wt = it.second;

          if (dis[node] + wt < dis[v]) {
            dis[v] = wt + dis[node];
          }
        }
      }

      for (int i = 0; i < N; i++)     if (dis[i] == 1e9) dis[i] = -1;
        
      
      return dis;
    }
};
