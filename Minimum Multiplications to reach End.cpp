class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        if(start==end) return 0;
        int mod = 1e5;
        vector<bool> vis(mod);
        queue<pair<int,int>> q;
        q.push({0,start});
        vis[start]=1;
        while(!q.empty()){
            auto it = q.front();
            int level=it.first;
            int temp=it.second;
            q.pop();
                for(int j=0;j<arr.size();j++){
                    int prod = (temp * arr[j])%mod;
                    if(prod==end) return level+1;
                    if(vis[prod]) continue;
                    q.push({level+1,prod});
                    vis[prod]=1;
                }
        }
        return -1;
    }
};
