class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int>ans;
            int n=txt.size();
            int m=pat.size();
            if(n<m){
                return {-1};
            }
            for(int i=0;i<n-m+1;i++){
                if(txt[i]==pat[0]){
                    if(txt.substr(i,m)==pat){
                        ans.push_back(i+1);
                    }
                }
            }
            return ans;
        }
};
