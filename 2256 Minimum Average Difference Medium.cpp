class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {

        long long sum=0;
        int n=nums.size();
        vector<long long >v(n);
        if(n==1) return 0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            v[i]=sum;
        }
        for(int i=0;i<n-1;i++){
            v[i]=abs(v[i]/(i+1) - (v[n-1]-v[i])/(n-i-1));
        }
        v[n-1]=v[n-1]/(n);

        int ans=0;
        for(int i=1;i<n;i++){
            if(v[i]==v[ans])
            ans=min(ans,i);
            else if(v[i]<v[ans])
            ans=i;
        }
        return ans;
    }
};
