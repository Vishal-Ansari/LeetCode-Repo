
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());  
        if(nums.size() < 3){      
            return {};
        }
        if(nums[0] > 0){  
            return {};
        }
        unordered_map<int , int> hashMap;
        for(int i = 0 ; i < nums.size() ; ++i){     
            hashMap[nums[i]] = i;
        }
        vector<vector<int>> answer;
        for(int i = 0 ; i < nums.size() - 2 ; ++i){
            if(nums[i] > 0){ 
                break;
            }
            for(int j = i + 1 ; j < nums.size() - 1 ; ++j){     
                int required = -1*(nums[i] + nums[j]);    
                if(hashMap.count(required) && hashMap.find(required)->second > j){ 
                    answer.push_back({nums[i] , nums[j] , required});
                }
                j = hashMap.find(nums[j])->second; 
            }
            i = hashMap.find(nums[i])->second;     
        }
        return answer; 
    }
};




// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         // -4 -1 -1 0 1 2 
//         int n=nums.size();
//         vector<vector<int>>ans;
//         for(int i=0;i<n-2;i++){
//                 int j=i+1;
//                 int k=n-1;
//                 while(j<=k){
//                     vector<int>v;
//                     int sum=nums[i]+nums[j]+nums[k];
//                     if(sum==0 && i!=j && j!=k && i!=k){
//                         v.push_back(nums[i]);
//                         v.push_back(nums[j]);
//                         v.push_back(nums[k]);
//                         ans.push_back(v);
//                     }
//                     if(sum<0)
//                     j++;
//                     else
//                     k--;
//                 }
//             }
//         return ans;
//     }
// };
