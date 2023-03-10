class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& prerequisites) {
        vector<int> adj[N];
        
	    for(auto it: prerequisites){
	        adj[it[1]].push_back(it[0]);
	    }
	    
	   int indegree[N];
       memset(indegree, 0, sizeof(indegree));
	   for(int i =0;i<N;i++){
	       for(auto it: adj[i])
	        indegree[it]++;
	   }
        
        queue<int> q;
        for(int i=0;i<N;i++) if(indegree[i]==0) q.push(i);
        
        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
            
        }
        if(count==N) return true;
        return false;
    }
};
