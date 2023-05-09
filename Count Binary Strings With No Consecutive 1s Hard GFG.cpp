class Solution {
  public:
  int mod=1e9+7;
  vector<vector<long long>>multiply(vector<vector<long long>>&a,vector<vector<long long>>&b){
      vector<vector<long long>>matrix(2,vector<long long>(2,0));
      for(int i=0;i<2;i++){
          for(int j=0;j<2;j++){
              int count=0;
              for(int k=0;k<2;k++){
                 count=(count%mod+(a[i][k]*b[k][j])%mod)%mod; 
              }
          
          matrix[i][j]=count%mod;
          }
      }
      return matrix;
  }
  
  vector<vector<long long>> matrixexponention(vector<vector<long long>>&v,long long int n){
      if(n==1){
          return v;
      }
      
      vector<vector<long long>>temp=matrixexponention(v,n/2);
      vector<vector<long long>>ans=multiply(temp,temp);
      if(n%2==1){
          ans=multiply(ans,v);
      }
      return ans;
      
  }
    int countStrings(long long int N) {
       vector<vector<long long >>matrix(2,vector<long long>(2,0));
        matrix[0][0]=1;
        matrix[0][1]=1;
        matrix[1][0]=1;
        matrix[1][1]=0;
        matrix=matrixexponention(matrix,N);
        return (matrix[0][0]+matrix[0][1])%mod;
    }
};
