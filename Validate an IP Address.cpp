class Solution {
    public:
        int isValid(string s) {
            int n=s.length();
            int count=0;
            for(int i=0;i<n;i++)
            if(s[i]=='.') count++;
            if(count!=3) return 0;
            
            unordered_set<string> st;
            for(int i=0;i<=255;i++)
            st.insert(to_string(i));
            count=0;
            
            string temp="";
            for(int i=0;i<n;i++){
                if(s[i]!='.')
                temp=temp+s[i];
                else{
                    if(st.count(temp)!=0) count++;
                    temp="";
                }
            }
            if(st.count(temp)!=0) count++;
            if(count!=4) return 0;
            
            return 1;
            
        }
};
