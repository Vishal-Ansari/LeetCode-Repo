class Solution {
  public:
    
    void dfs(int node, vector<int> adj[], vector<int>& ans, vector<int>&vis){
        vis[node]=1;
        ans.push_back(node);
        for(auto it: adj[node]){
            if(vis[it]==-1){
                dfs(it,adj,ans,vis);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> vis(V,-1);
        for(auto it: adj){
            if(vis[it]==-1){
                dfs(it,adj,ans,vis);
            }
        }
        return ans;
    }
};
