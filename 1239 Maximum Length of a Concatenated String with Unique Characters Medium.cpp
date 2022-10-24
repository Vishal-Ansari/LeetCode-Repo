//bit masking

class Solution{
    public:
        int maxLength(vector<string>& arr){
            int n=arr.size();
            int ans=0;
            for(int i=0;i<(1<<n);i++){
                vector<bool>vis(26,0);
                string s="";
                bool stop=0;
                for(int j=0;j<n;j++){
                    if(i&(1<<j)){
                        for(auto c:arr[j]){
                            if(vis[c-'a']){
                                stop=1;
                                break;
                            }
                            vis[c-'a']=1;
                        }
                        if(stop)
                            continue;
                        s+=arr[j];
                        ans=max(ans,int(s.size()));
                    }
                }
            }
            return ans;
        }
};












// class Solution {
// public:
//     bool dupli(string s){
//         sort(s.begin(),s.end());
//         for(int i=0;i<s.size()-1;i++)
//         {
//             if(s[i]==s[i+1])
//                 return true;
//         }
//         return false;
//     }
    
//     int maxLength(vector<string>& arr) {
//         int n=arr.size();
//         int count=arr[0].size();
//         for(int i=0;i<n;i++){
//             int b=arr[i].size();
//             count=max(count,b);
//         }
            

//         string con="";
//         for(int i=0;i<n-1;i++){
//             for(int j=1;j<n;j++){
//                  con=arr[i]+arr[j];
//                 if(dupli(con)){
//                     con=con-arr[j];
//                 }
//                 else{
//                     int v=con.size();
//                     count+=max(count,v);
//                 }     
//             }
//         }
//         return count;
//     }
// };



