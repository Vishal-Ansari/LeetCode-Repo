	class Solution {
	public:
	int longestPalindrome(string s) {
    
    unordered_map<char,int>ans;
    for(int i=0;i<s.length();i++){
        ans[s[i]]++;
    }
    int count=0;
    for(auto i:ans){
        if(i.second%2!=0){
            count++;
        }
    }
    if(count>1){
        return s.length()-count+1;
    }
    return s.length();
  }
};
