class Solution{
    public:
    bool isPossible(vector<int>& sweetness, int k, int mid){
        int cnt = 0;
        long long sum = 0;
        for(auto &it: sweetness){
            sum+=it;
            if(sum>=mid){
                cnt++;
                sum = 0;
            }
        }
        return (cnt>=k+1);
    }
    int maxSweetness(vector<int>& sweetness, int N, int K) {
        long long low = 0;
        long long high =0;
        for(auto it: sweetness) high+=it;
        long long ans = -1;
        while(low<=high){
            long long mid = low+(high-low)/2;
            
            if(isPossible(sweetness,K,mid)){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};
