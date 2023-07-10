class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int r,int c,int k)
    {
 		vector<int> ans;
 		int top=0,bottom=r-1,left=0,right=c-1;
 		while(top<=bottom && left<=right){
           for(int i=left;i<=right;i++) ans.push_back(a[top][i]);
           top++;
           for(int i=top;i<=bottom;i++) ans.push_back(a[i][right]);
           right--;
           if(top<=bottom){
           for(int i=right;i>=left;i--) ans.push_back(a[bottom][i]);
           bottom--;
           }
           if(left<=right){
           for(int i=bottom;i>=top;i--) ans.push_back(a[i][left]);
           left++;
           }
 		}
 		return ans[k-1];
    }
};
