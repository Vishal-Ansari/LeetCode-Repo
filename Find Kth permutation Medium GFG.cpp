class Solution
{
public:
    string kthPermutation(int n, int k)
    {
           int fact=1;
        vector<int> nums;
        for(int i=1;i<n;i++){
            fact=fact*i;
            nums.push_back(i); // 1 2 3 4 5 6 7 8 9
        }
        nums.push_back(n);
        string ans="";
        k=k-1;
        while(k>=0){
            ans=ans+ to_string(nums[k/fact]);
            nums.erase(nums.begin() +k/fact);
            if(nums.size()==0) break;
            k=k%fact;
            fact=fact/nums.size();
        }
        return ans;
    }
};
