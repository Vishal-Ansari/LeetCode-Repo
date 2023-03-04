class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int start=0,minstart=0,maxstart=0;
        bool minf=false,maxf=false;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(num<minK || num>maxK){
                minf=false;
                maxf=false;   
                start=i+1;
            }
            if(num==minK){
                minf=true;
                minstart=i;
            }
            if(num==maxK){
                maxf=true;

                maxstart=i;
            }
            if(minf && maxf){
                ans+=(min(minstart,maxstart)-start+1);
            }
        }
        return ans;

    }
};
