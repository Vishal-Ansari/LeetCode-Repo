
class Solution {
  public:
        bool dfs(int node, vector<vector<int>>& graph,vector<int>&vis, vector<int>&path, vector<int>&check){
            vis[node]=1;
            path[node]=1;
            check[node]=0;
            
            for(auto it: graph[node]){
                if(!vis[it]){
                    if(dfs(it,graph,vis,path,check)==true){
                        check[node]=0;
                        return true;
                    } 
                }
                else if(path[it]==1){
                    return true;
                    check[node]=0;
                }
            }
            check[node]=1;
            path[node]=0;
            return false;
        }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int> ans;
        vector<int> vis(V,0);
        vector<int> path(V,0);
        vector<int> check(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,graph,vis,path,check);
            }
        }
        
        for(int i=0;i<V;i++) if(check[i]==1) ans.push_back(i);
        return ans;
    }
};
