class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        int sum=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++) sum+=a[i];
        int sum2=a[0];
        for(int i=1;i<n-1;i++){
            if(sum2== (sum-sum2-a[i])) return i+1;
            else sum2+=a[i];
        }
        return -1;
    }
};
