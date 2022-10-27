class Solution {
public:
    int help(int i, string &s, unordered_set<string>&st ,string temp){
        if(i==s.size()) return 0;
        else{
            temp+=s[i];
            int op1=0,op2=0;
            if(st.find(temp)==st.end()){
                st.insert(temp);
                op1=1+help(i+1,s,st,"");
                st.erase(temp);
            }
            op2=help(i+1,s,st,temp);
            return max(op1,op2);
        }
    }
    
    int maxUniqueSplit(string s) {
        unordered_set<string>st;
       return help(0,s,st,"");
    }
};



// kuch to gadbad h isme niche vale m

// class Solution {
// public:
//     int maxUniqueSplit(string s) {
//         unordered_set<string> st;
//         string str="";
//         int count=0;
//         int j=0;
//         for(int i=0;i<s.size();i++){
//             str+=s[i];
//             if(st.find(str)==st.end()){
//                 st.insert(str);
//                 count++;
//                 str="";
//             }
            
//         }
//         return count;
//     }
// };
