class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        long long sum=0;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int> a;
        int i=0,j=n-1;
        while(i<=j){
            if(i==j){
                a.push_back(arr[i]);
                break;
            }
            a.push_back(arr[i++]);
            a.push_back(arr[j--]);
        }
        for(int i=1;i<n;i++){
            sum+=abs(a[i]-a[i-1]);
        }
        sum+=abs(a[0]-a[n-1]);
        return sum;
    }
};
