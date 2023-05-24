class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        long long int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        
        for(int i=N;i>0;i--){
            if(sum%i==0) return i;
        }
        
        return N;
    }
};
