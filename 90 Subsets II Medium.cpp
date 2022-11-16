class Solution {
public:
void findCombinations(int ind, vector<vector<int>>&ans, vector<int>&nums, vector<int>ds){
     ans.push_back(ds);
     for(int i=ind;i<nums.size();i++){
         if(i!=ind && nums[i]==nums[i-1]) continue;
         ds.push_back(nums[i]);
         findCombinations(i+1,ans,nums,ds);
         ds.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findCombinations(0,ans,nums,ds);
        return ans;
    }
};







class Solution {
  public:
    void fun(vector < int > & nums, int index, vector < int > ds, set < vector < int >> & res) {
      if (index == nums.size()) {
        sort(ds.begin(), ds.end());
        res.insert(ds);
        return;
      }
      ds.push_back(nums[index]);
      fun(nums, index + 1, ds, res);
      ds.pop_back();
      fun(nums, index + 1, ds, res);
    }
  vector <vector<int>> subsetsWithDup(vector < int > & nums) {
    vector < vector < int >> ans;
    set < vector < int >> res;
    vector < int > ds;
    fun(nums, 0, ds, res);
    for (auto it = res.begin(); it != res.end(); it++) {
      ans.push_back( * it);
    }
    return ans;
  }
};
