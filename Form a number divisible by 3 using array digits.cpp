class Solution {
  public:
    int digitsum(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int isPossible(int N, int arr[]) {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=digitsum(arr[i]);
        }
        return sum%3==0?1:0;
    }
};
