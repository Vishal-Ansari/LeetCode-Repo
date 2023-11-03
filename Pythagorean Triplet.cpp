class Solution{
public:
	bool checkTriplet(int arr[], int n) {
	    if(n<3) return false;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++) arr[i]=arr[i]*arr[i];
	    
	    for(int k=n-1;k>=2;k--){
	        int i=0,j=k-1;
	        while(i<j){
	            if(arr[i]+arr[j]==arr[k]) return true;
	            else if(arr[i]+arr[j]<arr[k]) i++;
	            else j--;
	        }
	    }
	    return false;
	}
};
