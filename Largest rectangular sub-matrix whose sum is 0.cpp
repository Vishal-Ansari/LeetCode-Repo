class Solution{
  public:
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
      int n=a.size();
      int m=a[0].size();
      vector<vector<int>> sum(n,vector<int>(m,0));
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              sum[i][j]=a[i][j]+ (j>0?sum[i][j-1]:0);
          }
      }
      
      int maxarea=0,startrow=0,endrow=-1,startcol=0,endcol=-1;
      for(int c1=0;c1<m;c1++){
          for(int c2=c1;c2<m;c2++){
              vector<int> temp(n);
              for(int i=0;i<n;i++){
                  temp[i]=sum[i][c2]- (c1>0? sum[i][c1-1]:0);
              }
              unordered_map<int,int> mp;
              mp[0]=-1;
              int currsum=0;
              for(int i=0;i<n;i++){
                  currsum+=temp[i];
                  if(mp.find(currsum)!=mp.end()){
                      int area= (c2-c1+1)*(i-(mp[currsum]));
                      if(area>maxarea){
                          maxarea=area;
                          startrow=mp[currsum]+1;
                          endrow=i;
                          startcol=c1;
                          endcol=c2;
                      }
                  }
                  else{
                      mp[currsum]=i;
                  }
              }
          }
      }
      
      vector<vector<int>> ans;
      if(maxarea==0) return ans;
      for(int i=startrow;i<=endrow;i++){
          vector<int> t;
          for(int j=startcol;j<=endcol;j++){
              t.push_back(a[i][j]);
          }
          ans.push_back(t);
      }
      
      return ans;
  }
};
