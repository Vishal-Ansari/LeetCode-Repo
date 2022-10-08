class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(), nums.end());
        int mini = INT_MAX, sum, res;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int start = i + 1;
            int end = nums.size() - 1;
            while (start < end)
            {
                sum = nums[i] + nums[start] + nums[end];
                int diff = sum - target;
                if (diff > 0)
                    end = end - 1;
                else if (diff < 0)
                    start = start + 1;
                else
                    return sum;
                if (abs(diff) < mini)
                {
                    mini = abs(diff);
                    res = sum;
                }
            }
        }
        return res;
    }
};
