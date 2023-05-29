class Solution {
  public:
  bool isSubstring(string s1, string s2){
       int n1=s1.size();
       int n2=s2.size();
       if(n2<n1) return false;
       
       for(int i=0;i<n2;i++){
           if(s1[i]!=s2[i]) return false;
       }
       return true;
}
    vector<string> CamelCase(int N, vector<string> dict, string Pattern) {
        vector<string> ans;
        for(int i=0;i<dict.size();i++){
            string str="";
            bool f=0;
            for(int j=0;j<dict[i].size();j++){
                char c=dict[i][j];
                if(isupper(c)){
                    str+=dict[i][j];
                }
                if(Pattern==str){
                    f=1;
                }
            }
            if(f==1) ans.push_back(dict[i]);
        }
        
        if(ans.size()>0) return ans;
        return {"-1"};
    }
};
