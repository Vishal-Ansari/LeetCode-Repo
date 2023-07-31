class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        queue<int> q;
        vector<int> vis(V,0);
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(auto it: adj[front]){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        return ans;
    }
};
