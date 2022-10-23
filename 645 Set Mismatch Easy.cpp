class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();

        // vector<int> fre1(n,0);
        map<int,int> mp;
        for(int i=0;i<n;i++){
          mp[nums[i]]++;  
        }
         
        
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
                break;
            }
        }
         for(int i=1;i<=n;i++){
            if(mp[i]==2){
                ans.push_back(i);
                break;
            }
        }
       
         reverse(ans.begin(),ans.end());
        return ans;
        
    }
};













class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    //sum of elements on nums
    int initialSum = accumulate(nums.begin(), nums.end(), 0);

    //put the element of nums into set to remove the duplicate number
    set<int> s;
    for(auto &i: nums){
        s.insert(i);
    }

    //sum of elements of the set
    int sum = accumulate(s.begin(), s.end(), 0);

    //difference of initialSum and sum will give us the repeated number
    int repeatedNum = initialSum - sum;

    //sum of all the natural numbers from 1 to n
    int n = nums.size() + 1;

    //subtracting the sum of elements in set i.e. sum from the sum of the natural numbers will give us the missing number
    int missingNum = n * (n-1)/2 - sum;

    return {repeatedNum, missingNum};
}
};
