class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int key;
        for(auto it: mp){
            
            int value=it.second;
            if(value==1)
                key=it.first;
                
                
        }
        return key;
    }
};




class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++)
            a=a^nums[i];
        
        return a;
    }
};