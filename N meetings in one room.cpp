class Solution {
  public:
    bool static comp( pair<int,int>&a, pair<int,int>&b){
        return (a.second<b.second) || (a.second==b.second && a.first<=b.first);
    }
    
    int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int,int>> meet;
        for(int i=0;i<n;i++){
            meet.push_back({start[i],end[i]});
        }
        sort(meet.begin(),meet.end(),comp);
        int ans=1;
        int endTime=meet[0].second;
        for(int i=1;i<n;i++){
            if(endTime< meet[i].first){
                ans++;
                endTime=meet[i].second;
            }
        }
        return ans;
    }
};
