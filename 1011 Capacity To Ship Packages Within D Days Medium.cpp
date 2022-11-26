class Solution {
public:
     bool help(int capacity, vector<int>& weights, int days){
        int req=1;
        int cap=capacity;
        for(auto a:weights){
            if(cap>=a){
                cap-=a;
            }
            else{
                req++;
                cap=capacity-a;
            }
        }
        if(req<=days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0, s=0;
        for( auto a: weights){
            s=max(s,a);
            sum+=a;
        }
        int start=s, end=sum;
        int ans=sum;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(help(mid,weights,days)){
            ans=min(ans,mid);
            end=mid-1;
            }
            else start=mid+1;
        }
        return ans;      
    }
};
