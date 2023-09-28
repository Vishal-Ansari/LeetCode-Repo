class Solution{
    public:
    void convertToWave(int n, vector<int>& arr){
        for(int i=0;i<n-1;i+=2) swap(arr[i],arr[i+1]);
    }
};
