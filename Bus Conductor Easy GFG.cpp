class Solution {
  public:
    int findMoves(int n, vector<int> c, vector<int> p) {
        sort(c.begin(),c.end());
        sort(p.begin(),p.end());
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=abs(c[i]-p[i]);
        }
        return ans;
    }
};
