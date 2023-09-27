class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        vector<int> ans(2);
        int mn=INT_MAX;
        int i=0;
        int j=m-1;
        int a=-1,b=-1;
        while(i<n && j>=0){
            int sum=arr[i]+brr[j];
            int diff=abs(sum-x);
            if(diff< mn){
                mn=diff;
                ans[0]=arr[i];
                ans[1]=brr[j];
            }
            if(sum>x) j--;
            else i++;
        }
        return ans;
    }
};
