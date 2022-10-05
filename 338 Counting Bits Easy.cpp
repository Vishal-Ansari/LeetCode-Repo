class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(int (n+1));
        int x,i,count=0;
    for(i=0;i<=n;i++)
    {
        x=i;
        count=0;
        while(x>0) 
        {
            if(x%2==1)
            count++;
            x=x/2;

        }
         ans[i]=count;
    }
      return ans;
    }
};