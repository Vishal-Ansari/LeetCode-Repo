class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
            return nums[nums.size()-k];
    }
};







class Solution {
public:
    
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(),nums.end());
        int ans=0;
        while(k--){
            ans=pq.top();
            pq.pop();
        }
        return ans;
    }
};





class Solution {
public:
    
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int> , greater<int>>pq;
        for(auto x: nums){
            pq.push(x);
            if(pq.size()>k)
                pq.pop();
    
        }
        return pq.top();
    }
};









class KthLargest {
public:
    int gk;
    priority_queue<int, vector<int>, greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        gk=k;
        for(auto x: nums){
                pq.push(x);
                if(pq.size()>k)
                    pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>gk)
            pq.pop();
        
        return pq.top();
    }
};
