class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_set<int> u_set;

		for (int i=0; i<nums.size(); i++){
			if (u_set.find(nums[i]) != u_set.end()) return true;

			u_set.insert(nums[i]);
		}

		return false;
	}
};
