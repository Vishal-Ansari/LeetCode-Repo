class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;
        
        for (int i = 0; i < nums.size(); i++) {
            if (hashmap.count(nums[i]) > 0 && abs(i - hashmap[nums[i]]) <= k) {
                return true;
            }
            else {
                hashmap[nums[i]] = i;
            }
        }
        
        return false;
    }
};
