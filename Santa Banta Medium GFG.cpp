class Solution{
public:
    int prime[100001];
    
    bool isPrime(int n)
    {
        if(n==1)return false;
        if(n==2 or n==3)return true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        
        return true;
    }
    
    int count= 0;
    void precompute(){
        for(int i=2;i<=1000000;i++)
        {
            if(isPrime(i))
            {
                count++;
                prime[count]= i;
            }
        }
        prime[1]=-1;
    }
    
    int dfs(int node,vector<bool> &vis,vector<vector<int>> &g)
    {
        vis[node]=true;
        
        int ans=0;
        for(auto it: g[node])
        {
            if(vis[it]==false)
            {
                ans+= 1+ dfs(it,vis,g);
            }
        }
        
        return ans;
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        vector<bool> vis(n+1, false);
        
        int maxi = -1;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false)
            {
                int val =1 + dfs(i,vis,g);
                maxi= max(maxi,val);
            }
        }
        
        if(maxi==-1)return -1;
        
        return prime[maxi];
        
    }
};
