class Solution {
public:
    void dfs(int index,vector<int>& nums, vector<vector<int>> &ans, vector<int>& temp){
        ans.push_back(temp);
        if(index==nums.size()){
            return;
        }
        for(int i=index;i<nums.size();i++){
            temp.push_back(nums[i]);
            dfs(i+1,nums,ans,temp);
            temp.pop_back();
            while(i+1<nums.size() && nums[index]==nums[i+1]){
                i++;
            }
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        dfs(0,nums,ans,temp);
        return ans;
    }
};
