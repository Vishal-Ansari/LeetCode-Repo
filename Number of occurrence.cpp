class Solution{
public:	

    int lower_index(int arr[],int n, int x){
        int low=0, high=n;
        int ind=-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==x){
                ind=mid;
                high=mid-1;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ind;
    }
    
    int high_index(int arr[],int n, int x){
        int low=0, high=n;
        int ind=-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==x){
                ind=mid;
                low=mid+1;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ind;
    }
    
    
	int count(int arr[], int n, int x) {
	    int start=lower_index(arr,n-1,x);
	    int end=high_index(arr,n-1,x);
	    
	    if(end==-1)  return 0;
	    return end-start+1;
	}
};
