class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i=0,j=1;
	    while(i<j && j<n ){
	        if(arr[i]==0){
	            while(j<n && arr[j]==0){
	                j++;
	            }
	            if(j<n) swap(arr[i],arr[j]);
	        }
	        i++;
	        j++;
	    }
	}
};
