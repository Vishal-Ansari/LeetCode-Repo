class Solution {
public:
    bool ok(vector<int> &A, vector<int> &B) {
        for(int i=0;i<128;i++) {
            if(A[i]<B[i]) return 0;
        }
        return 1;
    }
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";
        if(s==t) return s;
        int lo=0, hi=0, n=s.size(), ans=1e9;
        string res;
        vector<int> A(128, 0), B(128, 0);
        for(auto x: t) B[x]++;
        while(hi<n) {
            A[s[hi]]++;
            while(ok(A, B)) {
                if(ans>(hi-lo+1)) {
                    ans=hi-lo+1;
                    res=s.substr(lo, hi-lo+1);
                }
                A[s[lo++]]--;
            }
            hi++;
        }
        return res;
    }
};
















// class Solution {
// public:

//     string minWindow(string str, string pat) {
           
//     int len1 = str.length();
//     int len2 = pat.length();
        
//         string ans="";
        
//      map<char,int> mp2;
//         for(int i=0;i<len2;i++)
//             mp2[pat[i]]++;
        
//         int mct=0;
//         int dmct=len2;
        
//         map<char,int> mp1;
//         int i=-1,j=-1;
        
//         while(true){
//             bool f1=false;
//             bool f2=false;
//             // adding character
//             while(i<len1-1 && mct<dmct){
//                 i++;
//                 mp1[str[i]]++;
                
//                 if(mp1[str[i]]<=mp2[str[i]])
//                     mct++;
                
//                 f1=true;
//             }
            
//             // removing character
            
//             while(j<i && mct==dmct){
//                 string pans=str.substr(j+1,i+1);
//                 if(ans.length()==0 || pans.length()<ans.length())
//                     ans=pans;
                
//                 j++;
//                 if(mp1[str[j]]==1)
//                     mp1.erase(str[j]);
//                 else
//                     mp1[str[j]]--;
                
//                 if(mp1[str[j]]< mp2[str[j]])
//                     mct--;  
                
//                 f2=true;
//             }
            
//             if(f1==false && f2==false)
//                 break;
//         }
        
//         return ans;        
//     }
// };

