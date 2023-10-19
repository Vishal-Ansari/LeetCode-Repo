class Solution
{
	public:
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    queue<pair<int,int>> q;
	    vector<int> vis(V,0);
	    q.push({0,0});
	    vis[0]=1;
	    while(!q.empty()){
	        int node=q.front().first;
	        int level=q.front().second;
	        q.pop();
	        if(node==X) return level;
	        for(auto it: adj[node]){
	            if(!vis[it]){
	                q.push({it,level+1});
	                vis[it]=1;
	            }
	        }
	    }
	    return -1;
	}
};
