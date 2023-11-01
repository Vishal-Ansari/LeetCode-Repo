class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        int i=0;
        while(i<N){
            if(arr[i]<=0 or arr[i]>N ){
                i++;
                continue;
            }
            int index=arr[i]-1;
            if(arr[index]>0){
                arr[i]=arr[index];
                arr[index]=-1;
            }
            else{
                arr[i]=0;
                arr[index]--;
                i++;
            }
        }
        for(i=0;i<N;i++){
            if(arr[i]<0){
                arr[i]=-1*arr[i];
            }
            else{
                arr[i]=0;
            }
        }
    }
};
