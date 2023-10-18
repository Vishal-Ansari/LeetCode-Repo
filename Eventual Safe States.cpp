class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
         vector<int>ans;
     vector<int>arr [V];
       int indegree[V]={0};
       for(int i=0;i<V;i++){
           for(auto it:adj[i]){
               arr[it].push_back(i);
               indegree[i]++;
           }
       }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:arr[node]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
