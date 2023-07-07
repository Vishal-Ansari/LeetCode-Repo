// there are three methods to solve this question all are mentioned below

//Method 1 with space
// merge sort
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long temp[n+m];
            int i=0,j=0,k=0;
            while(i<n && j<m){
                if(arr1[i]<arr2[j]) temp[k++]=arr1[i++];
                else temp[k++]=arr2[j++];
            }
            while(i<n) temp[k++]=arr1[i++];
            while(j<m) temp[k++]=arr2[j++];
            
            i=0,j=0;
            
            while(i<n){
                arr1[i]=temp[i];
                i++;
            }
            while(j<m){
                arr2[j++]=temp[i++];
            }
};


// method 2
// without extra space
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
               int i=n-1,j=0;
        while(i>=0 && j<m){
            if(arr1[i]>arr2[j]){
                swap(arr1[i],arr2[j]);
            }
            i--;
            j++;
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        } 
};



// optimized solution
 class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int gap = (n+m) / 2 + (n+m) % 2;

        while (gap > 0)
        {
            int st = 0;
            int end = st + gap;
    
            while (end < n+m)
            {
                // st in arr1 and end in arr2
                if (st < n && end >= n)
                {
                    if(arr1[st]> arr2[end - n])
                    swap(arr1[st], arr2[end - n]);
                }
                // st in arr2 and end in arr2
                else if (st >= n)
                {
                    if(arr2[st-n] > arr2[end-n])
                    swap(arr2[st - n], arr2[end - n]);
                }
                // st in arr1 and end in arr1
                else
                {
                    if(arr1[st] >  arr1[end])
                    swap(arr1[st], arr1[end]);
                }
    
                st++;
                end++;
            }
    
            if (gap == 1)
            {
                break;
            }
    
            gap = (gap / 2) + (gap % 2);
            } 
        }
};
