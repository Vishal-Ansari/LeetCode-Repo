class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        // 1 1 2 5 5 ----- 1->2, 2->1, 5->2 
        set<int> st;
        for(auto it: mp){
            if(st.find(it.second)!=st.end()){
                return false;
            }
            st.insert(it.second);
        }
        return true;
    }
};
