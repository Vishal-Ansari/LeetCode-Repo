class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        vector<int>ans(n);
        int mul=1;
        left[0]=1;
        for(int i=1;i<n;i++){
            left[i]=nums[i-1]*left[i-1];
        }
        right[n-1]=1;
        for(int i=n-2;i>=0;i--)
        right[i]=nums[i+1]*right[i+1];

        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }

        return ans;

    }
};



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int mul=1;
        for(int i=0;i<n;i++){
            ans[i]=mul;
            mul=mul*nums[i];
        }
        mul=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=mul;
            mul*=nums[i];
        }

        return ans;

    }
};
