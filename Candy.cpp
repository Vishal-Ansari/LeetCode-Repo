class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        if(N==0) return 0;
        vector<int> left(N,0);
        vector<int> right(N,0);
        left[0]=1;
        right[N-1]=1;
        for(int i=1;i<N;i++){
            if(ratings[i]>ratings[i-1])    left[i]=left[i-1]+1;
            else                           left[i]=1;
        }
        for(int i=N-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])    right[i]=right[i+1]+1;
            else                           right[i]=1;
        }
        
        int ans=0;
        for(int i=0;i<N;i++){
            ans+=max(left[i],right[i]);
        }
        return ans;
    }
};
