class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<pair<int,int>,int>> v;
        for(int i=0;i<N;i++){
            v.push_back({{F[i],S[i]},i+1});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        int end=v[0].first.first;
        ans.push_back(v[0].second);
        for(int i=1;i<N;i++){
            if(v[i].first.second> end){
                ans.push_back(v[i].second);
                end=v[i].first.first;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
