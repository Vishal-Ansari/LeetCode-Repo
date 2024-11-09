class Solution {
  public:
    string minSum(vector<int> &arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        string s1="";
        string s2="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                s1+=to_string(arr[i]);
            }
            else{
                s2+=to_string(arr[i]);
            }
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        string ans="";
        int i=0;
        int carry=0;
        while(i<s1.size() || i<s2.size() || carry){
            int sum=0;
            if(i<s1.size())
            sum+=s1[i]-'0';
            if(i<s2.size())
            sum+=s2[i]-'0';
            sum+=carry;
            ans+=to_string(sum%10);
            carry=sum/10;
            i++;
        }
        while(ans.back()=='0'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
