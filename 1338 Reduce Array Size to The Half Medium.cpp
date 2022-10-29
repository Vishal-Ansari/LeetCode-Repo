class Solution {
public:
    int minSetSize(vector<int>& arr) {
         vector<int>v;
        sort(arr.begin(),arr.end());
        int c=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]) 
                c++;
            else{
                v.push_back(c);
                c=1;
            }
        }
        v.push_back(c);
        sort(v.begin(),v.end());
        int n=arr.size()/2, ans=0;
        for(int i=v.size()-1;i>=0&&n>0;i--){
            ans++;
            n-=v[i];
        }
        return ans;
    }
};






class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int size=mp.size();
        int curr_size=0;
        priority_queue<pair<int,int>>pq;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pq.push({it->second,it->first});
        }
        int ans=0;
        while(!pq.empty())
        {
            int s=pq.top().first;
            pq.pop();
            curr_size=curr_size+s;
            ans++;
            if(curr_size>=arr.size()/2)
            {
                break;
            }
        }
        return ans;
    }
};
