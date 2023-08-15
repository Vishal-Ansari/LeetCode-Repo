class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int r=0;
        int count=0;
        int flip=0;
        while(r<n){
            if(a[r]==0){
                count++;
            }else{
                count--;
            }
            
            flip=max(flip,count);
            
            if(count<0){
                count=0;
            }
            
            r++;
        }
        
        for(int i=0;i<n;i++){
            if(a[i]==1) flip++;
        }
        return flip;
    }
};
