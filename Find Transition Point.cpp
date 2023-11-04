class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        int ans=-1;
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==1){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};
