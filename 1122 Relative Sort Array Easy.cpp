class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int> ans;
        map<int,int> mp;
        for(auto x: arr1)
            mp[x]++;
        
        for(auto x: arr2){
            if(mp.find(x)!=mp.end()){
                auto temp=mp.find(x);
                int count= temp->second;
                vector<int>v(count,x);
                ans.insert(ans.end(),v.begin(),v.end());
                mp.erase(temp);
            }
        }
        for(auto x: mp){
            int key=x.first;
            int count=x.second;
            vector<int>v(count,key);
            ans.insert(ans.end(),v.begin(),v.end());
        }
        return ans;
    }
};





class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int> ans;
        map<int,int> mp;
        for(auto x: arr1)
            mp[x]++;
        
        for(auto x: arr2){
            if(mp.find(x)!=mp.end()){
                auto temp=mp.find(x);
                int count= temp->second;
                for(int i=0;i<count;i++)
                ans.push_back(x);
                mp.erase(temp);
            }
        }
        for(auto x: mp){
            int key=x.first;
            int count=x.second;
            for(int i=0;i<count;i++)
                ans.push_back(key);
        }
        return ans;
    }
};