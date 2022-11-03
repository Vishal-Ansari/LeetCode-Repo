class Solution {
public:
    string entityParser(string text) {
        unordered_map<string,string>m;
        m["&quot;"]="\"";
        m["&apos;"]="'";
        m["&amp;"]="&";
        m["&gt;"]=">";
        m["&lt;"]="<";
        m["&frasl;"]="/";
        
        string ans="";
        for(int i=0;i<text.size();i++){
            if(text[i]=='&'){
                string s;
                while(i<text.size()){
                    s+=text[i];
                    if(text[i]==';' && m.find(s)!=m.end()){
                        ans+=m[s];
                        s="";
                        break;
                    }
                    else
                        i++;
                    if(text[i]=='&')
                    {
                        i--;
                        break;
                    }
                }
                ans+=s;
            }
            else
                ans+=text[i];
        }
        return ans;
    }
};
