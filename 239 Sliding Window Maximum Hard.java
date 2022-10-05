class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            deque<int>Qi(k);
           int i;
            int n=nums.size();
           vector<int>ans;
        for (i = 0; i < k; ++i)
        {
            while ((!Qi.empty()) && nums[i] >=nums[Qi.back()])
                Qi.pop_back();
     
            // Add new element at rear of queue
            Qi.push_back(i);
        }
        for (; i < n; ++i)
        {
            ans.push_back(nums[Qi.front()]);
    
            while ((!Qi.empty()) && Qi.front() <= i - k)
                Qi.pop_front();
     
           
            while ((!Qi.empty()) && nums[i] >=nums[Qi.back()])
                Qi.pop_back();
     
            Qi.push_back(i);
        }
        ans.push_back(nums[Qi.front()]);
        return ans;
        }
    };
