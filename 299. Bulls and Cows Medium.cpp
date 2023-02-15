class Solution {
public:
    string getHint(string secret, string guess) {
        map<char,int> ms;
        for(int i=0;i<secret.size();i++)
        {
            ms[secret[i]]++;
        }
        int bulls=0;
        int cows=0;
        for(int j=0;j<secret.size();j++)
        {
            if(secret[j]==guess[j])
            {
                bulls++;
                ms[secret[j]]-=1;
            }
            
        }
        for(int h=0;h<secret.size();h++)
        {   
            if(secret[h]!=guess[h])
            {
                if(ms[guess[h]]>=1)
                {
                    cows++;
                    ms[guess[h]]-=1;
                }
            }
        }
        string ans="";
        string b=to_string(bulls);
        ans=ans+b;
        string c=to_string(cows);
        ans=ans+'A';
        ans=ans+c;
        ans=ans+'B';
        return ans;
    }
};
