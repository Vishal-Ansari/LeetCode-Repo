class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                st.push(nums[i]);
                    count++;
            }
        }
        for(int i=0;i<n-count;i++)
            nums[i]=0;
        
        for(int i=n-count;i<n;i++)
        {
            nums[i]=st.top();
            st.pop();
        }
        reverse(nums.begin(),nums.end());
    }
};




class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                nums[j++]=nums[i];
        }
        
        for(;j<n;j++)
            nums[j]=0;
    }
};