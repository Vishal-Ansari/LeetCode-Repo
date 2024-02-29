class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int l=0,h=n-1;
       while(l<h){
           int mid=(l+h)/2;
           if(arr[mid]<arr[mid+1]) l=mid+1;
           else h=mid;
       }
       return l;
    }
};
