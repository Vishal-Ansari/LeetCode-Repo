class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        vector<int> lmax(N,0);
        vector<int> rmin(N,0);
        int lm=0;
        int rm=INT_MAX;
        
        if(N==1) return 0;
        
        for(int i=0;i<N;i++){
            lm=max(lm,A[i]);
            lmax[i]=lm;
        }
        for(int i=N-1;i>=0;i--){
            rm=min(rm,A[i]);
            rmin[i]=rm;
        }
        
        
        int ans=0;
        for(int i=1;i<N;i++){
            if(lmax[i-1]+rmin[i] >=K) ans++;
        }
        return ans;
    }
};
