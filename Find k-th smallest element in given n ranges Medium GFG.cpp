class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        sort(range.begin(),range.end());
        int ind=0;
        // merge intervals
        for(int i=1;i<n;i++){
            if(range[ind][1]>= range[i][0]){
                range[ind][1]= max(range[ind][1],range[i][1]);
            }
            else{
                ind++;
                range[ind]=range[i];
            }
        }
        vector<int> ans(q,-1);
        for(int i=0;i<q;i++){
            int x=queries[i];
            for(int j=0;j<=ind;j++){
                if(range[j][1]-range[j][0]+1>=x){
                    ans[i]= range[j][0]+ x -1;
                    break;
                }
                x-= range[j][1]-range[j][0]+1;
            }
        }
        return ans;
    } 
};
