// Optimized code
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        for(int i=0;i<n;i++){
            while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1] ){
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1)
            return i+1;
        }
        
        return n+1;
    } 
};

// code with extra space
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int i=0,j=0;
        while(i<n){
            if(arr[i]>=0){
                swap(arr[i],arr[j]);
                j++;
            }
            i++;
        }
        
        int N=n-j;
        for(i=j;i<N;i++){
            if(abs(arr[i]) <N ){
                arr[arr[i]-1]*=-1;
            }
        }
        
        for(int i=0;i<N;i++){
            if(arr[i]>0) return i+1;
        }
        
        return n+1;
    } 
};
