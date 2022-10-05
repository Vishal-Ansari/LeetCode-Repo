class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums2.size();
        unordered_map<int,int>mp;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i])
                st.pop();
            
            int res=st.empty()? -1: st.top();
            mp.insert({nums2[i], res});
            st.push(nums2[i]);
        }
       
        for(auto x: nums1)
            ans.push_back(mp[x]);
        return ans;
    }
};