class Solution
{
  public:
    string reverseEqn (string s)
        {
            int i=0;
            int n=s.size();
            while(i<n){
                int j=i;
                while(j<n && (s[j]!='+'  && s[j]!='-' && s[j]!='*' && s[j]!='/') ){
                    j++;
                }
                reverse(s.begin()+i, s.begin()+j);
                i=j+1;
            }
            reverse(s.begin(),s.end());
            return s;
        }
};
