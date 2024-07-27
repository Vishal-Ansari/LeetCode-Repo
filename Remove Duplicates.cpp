class Solution {
  public:

    string removeDups(string str) {
        vector<int> arr(26,0);
        string ans;
        int n=str.size();
        for(int i=0;i<n;i++){
            if(arr[str[i]-'a']!=0) continue;
            else{
                ans+=str[i];
                arr[str[i]-'a']=1;
            }
        }
        return ans;
    }
};
