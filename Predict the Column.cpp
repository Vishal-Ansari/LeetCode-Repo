class Solution{
    public:
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
       int ans=0;
       int col=-1;
       for(int i=0;i<N;i++){
           int cnt=0;
           for(int j=0;j<N;j++){
               if(arr[j][i]==0){
                   cnt++;
                   if(cnt>ans){
                       ans=cnt;
                       col=i;
                   }
               }
           }
       }
       return col;
    }
};
