//  O(2*n) space
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};



//O(n) space

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j = n;
        for(int i = 1; i <= 2*n; i += 2, j += 2) nums.insert(nums.begin() + i, nums[j]);
        nums.resize(2*n);
        return nums;
    }
};




// O(1) space

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       for(int i=0;i<2*n;i++){
           int curr=nums[i];
           int curr_pos=i;
           while(curr>0){
               int new_pos{};
               if(curr_pos<n)
               new_pos=2*curr_pos;
               else
               new_pos=2*(curr_pos-n)+1;

               int new_num=nums[new_pos];
               nums[new_pos]=-curr;
               curr=new_num;
               curr_pos=new_pos;
           }
       }
       for(int i=0;i<2*n;i++) if(nums[i]<0) nums[i]=-nums[i];
       return nums;
    }
};
