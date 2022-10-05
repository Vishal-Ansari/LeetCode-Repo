class Solution {
public:
   
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
       vector<int>ans;
        int start=-1;
        int last=-1;
        int low=0;
        int high=n-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                int temp=mid;
                while(mid>0 && nums[mid-1]==target){
                    mid--;
                }
                start=mid;
                while(temp<high && nums[temp+1]==target){
                    temp++;
                }
                last=temp;
                
                ans.push_back(start);
                ans.push_back(last);
                return ans;
            }
            else if(nums[mid]<target) {
                low=mid+1;
            }
            else {
                high=mid-1;
            }
            
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};