class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]==0)
                ans.push_back(nums[i]);
        for(int i=0;i<n;i++)
            if(nums[i]==1)
                ans.push_back(nums[i]);
        for(int i=0;i<n;i++)
            if(nums[i]==2)
                ans.push_back(nums[i]);
        for(int i=0;i<n;i++)
            nums[i]=ans[i];
    }
};






class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n=nums.size();
        int l=0,m=0,h=n-1;
        while(m<=h){
           
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;m++;
            }
             else if(nums[m]==1) m++;
            else{
                swap(nums[m],nums[h]);
                h--;
            }
        }
    }
};