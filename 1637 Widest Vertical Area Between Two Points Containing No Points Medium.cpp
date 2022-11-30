class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x;
        for(int i=0;i<points.size();i++){
            x.push_back(points[i][0]);
        }
        sort(x.begin(),x.end());
        int ans=0;
        for(int i=1;i<x.size();i++){
            ans=max(ans,x[i]-x[i-1]);
        }
        return ans;
    }
};
