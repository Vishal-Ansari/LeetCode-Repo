
class Solution{
  public:
    int longestKSubstr(string s, int k) {

     int freq[26]={0},ans=-1,i=0,j=0,n=s.length(),sum;
        freq[s[0]-'a']++;
        while(j<n){
            sum=0;
            for(int t=0; t<26; t++) if(freq[t]!=0) sum++;
            if(sum>k) freq[s[i++]-'a']--;
            else{
                if(sum==k) ans=max(ans,(j-i+1));
                freq[s[++j]-'a']++;
            }
        }
        return ans;
    }
};
