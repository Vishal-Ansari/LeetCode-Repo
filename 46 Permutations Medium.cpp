class Solution {
public:
    void help(vector<int>& nums, int freq[],vector<vector<int>>&ans, vector<int>&ds ){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                help(nums,freq,ans,ds);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;        
        help(nums,freq,ans,ds);
        return ans;
    }
};



class Solution {
public:
    
    void help(vector<int>& nums, int i,vector<vector<int>>&ans ){
        if(i==nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            help(nums,i+1,ans);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        help(nums,0,ans);
        return ans;
        
    }
};
