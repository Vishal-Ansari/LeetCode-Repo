class Solution {
public:
    int min_sprinklers(int gallery[], int n) {
        vector<pair<int,int>> range;
        for(int i=0;i<n;i++){
            if(gallery[i]!=-1){
                int left=max(0,i-gallery[i]);
                int right=min(n-1,i+gallery[i]);
                range.push_back({left,right});
            }
        }
        sort(range.begin(),range.end());
        int start=0,ans=0,i=0,end=0;
        while(start<=n-1){
            end=INT_MIN;
            while(i<n && range[i].first<=start){
                end=max(end,range[i].second);
                i++;
            }
            if(end == INT_MIN)
                return -1;
            ans++;
            start=end+1;
        }
        return ans;
    }
};
