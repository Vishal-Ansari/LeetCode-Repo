class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        int minlen=1000,count=0;
        int n=arr.size();
        string str;
        string ans;
        for(int i=0;i<n;i++){
            int len=arr[i].length();
            if(len<minlen){
                minlen=len;
                str=arr[i];
            }
        }
        
        for(int i=0;i<minlen;i++){
            for(int j=0;j<n;j++){
                if(arr[j][i]!=str[i]){
                    str= str.substr(0,count);
                }
            }
            count++;
        }
        
        if(str.length()==0)
        return "-1";
        
        return str;
    }
};
