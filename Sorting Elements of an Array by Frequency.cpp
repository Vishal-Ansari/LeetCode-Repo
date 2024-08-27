class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements
    static bool comp(pair<int,int> a, pair<int,int>b){
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second;
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
        vector<int>ans;
        unordered_map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }
        vector<pair<int,int>> v;
        for(auto it:mp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),comp);
        
        for(auto it:v){
            int count=it.second;
            while(count--) ans.push_back(it.first);
        }
        return ans;
    }
};
