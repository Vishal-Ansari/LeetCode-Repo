class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;){
            int start=i;
            while(start<n && nums[start]==0) start++;
            int end=start;
            int c=0;
            int sn=-1, en=-1;
            while(end<n && nums[end]!=0){
                if(nums[end]<0){
                    c++;
                    if(sn==-1)sn=end;
                    en=end;
                }
                end++;
            }
            if(c%2==0) ans=max(ans,end-start);
            else{
                if(sn!=-1) ans=max(ans,end-sn-1);
                if(en!=-1) ans=max(ans,en-start);
            }
            i=end+1;
        }
        return ans;
    }
};
