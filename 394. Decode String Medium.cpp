class Solution {
public:
    string decodeString(string s) {
        stack <char> st;  // if stack<string> is taken  then changes are made  given in below code 2nd
        string ans;
        int n=s.length();
        int i=0;
        while(i<n){
            if(s[i]==']'){
                string str;
                while(st.top()!='[' && !st.empty()){
                    str+=st.top();
                    st.pop();
                }
                reverse(str.begin(),str.end());
                st.pop();
                string num;
                while( !st.empty() && st.top()>='0' && st.top()<='9'){
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int x=num.size()!=0 ? stoi(num): 1;
                string temp;
                for(int j=0;j<x;j++) temp+=str;
                for(int i=0;i<temp.length();i++) st.push(temp[i]);

            }
            else {
             st.push(s[i]);
            }

            i++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};






// class Solution {
// public:
//     string decodeString(string s) {
//         stack<string> st;
//         int ln= s.size();
        
//         for(int i=0;i<ln;i++){
//             if(s[i]!= ']') st.push(string(1,s[i]));
//             else{
//                 //finding nested problem,ie string inside []
//                 string temp="";
//                 while(st.top()!= string(1,'[')){
//                     temp+= st.top();
//                     st.pop();
//                 }
//                 reverse(temp.begin(),temp.end());
//                 st.pop();
                
//                 //finding number
//                 string num="";
//                 while(!st.empty() && (st.top()>=string(1,'0') && st.top()<=string(1,'9'))){
//                     num+=st.top();
//                     st.pop();
//                 }
//                 reverse(num.begin(),num.end());
                
//                 int n= num.size()!=0? stoi(num): 1;
//                 string toPush= "";
//                 for(int i=0;i<n;i++)toPush+= temp;
//                 reverse(toPush.begin(),toPush.end());
//                 st.push(toPush);
//             }
//         }
        
//         string ans="";
//         while(!st.empty()){
//             ans+= st.top();
//             st.pop();
//         }
        
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
