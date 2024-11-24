class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int n=arr.size();
        long long ma=arr[0];
	    long long mi=arr[0];
	    long long ans=arr[0];
	 
	    for(int i=1;i<n;i++){
	        long long temp=arr[i];
	        if(temp<0)
	        swap(ma,mi);
	        
	        ma=max(temp,ma*temp);
	        mi=min(temp,mi*temp);
	        ans=max(ans,ma);
	    }
	    return   ans;
    }
};
