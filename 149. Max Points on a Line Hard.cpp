class Solution {
public:
    int maxPoints(vector<vector<int>>& pt) {
        int ans=1; 
        int n=pt.size();
       
        for(int i=0;i<n-1;i++){
            map<double,int> mp;
            for(int j=i+1;j<n;j++){
                if(pt[j][1]==pt[i][1]) 
                mp[-90]++; 
                else{ 
                    double x = (double)(pt[j][0]-pt[i][0])/(double)(pt[j][1]-pt[i][1]);
                    
                    mp[x]++;
                }
            }
        
            int temp = 0;
            for(auto it:mp)
                temp = max(temp, it.second+1);    
            ans = max(temp, ans);
        }
        return ans;
    }
};
