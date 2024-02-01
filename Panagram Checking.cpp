class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        vector<int> arr(26,0);
        int n=s.length();
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z' ) || (s[i]>='A' && s[i]<='Z' )){
                char c=tolower(s[i]);
                arr[c-'a']=1;
            }
        }
        for(int i=0;i<26;i++){
            if(arr[i]==0) return false;
        }
        return true;
    }
};
