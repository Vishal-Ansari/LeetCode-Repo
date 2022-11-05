class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<long,long> mp1,mp2;
        for(auto a: nums1) mp1[(long)a*(long)a]++;
        for(auto a: nums2) mp2[(long)a*(long)a]++;
        int ans=0;
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                ans+=mp2[(long)nums1[i]*(long)nums1[j]];
            }      
        }
        for(int i=0;i<nums2.size()-1;i++){
            for(int j=i+1;j<nums2.size();j++){
                ans+=mp1[(long)nums2[i]*(long)nums2[j]];
            }      
        }
        return ans;
    }
};

