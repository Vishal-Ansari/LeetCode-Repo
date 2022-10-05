class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int minlen=1000,count=0;
        string str;
        for(int i=0;i<strs.size();i++){
            int len=strs[i].length();
            if(len<minlen){
                minlen=len;
                str=strs[i];
            }
        }
        
        for(int i=0;i<minlen;i++){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=str[i]){
                    return str.substr(0,count);
                }
            }
            count++;
        }
        return str.substr(0,count);
    }
};