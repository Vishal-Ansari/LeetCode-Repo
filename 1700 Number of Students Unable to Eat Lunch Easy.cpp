class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& s) {
        vector<int> v(2);
        for(auto a: st) v[a]++;
        
        for(auto a: s){
            if(v[a]>0){
                v[a]--;
            }
            else return v[0]+v[1];
        }
        return 0;
    }
};










// class Solution {
// public:
//     int countStudents(vector<int>& st, vector<int>& s) {
//         deque<int>q;
//         for(auto a: st) q.push_back(a); // insserting elements into queue
        
//         for(auto a: s){
//             if(q.front()==a){
//                 q.pop_front();
//                 continue;
//             }
            
//             int s=q.size();
//             int f=0;
//             while(s--){
//                 auto x=q.front();
//                 if(x==a){
//                     q.pop_front();
//                     f=1;
//                     break;
//                 }
                    
//                 else{
//                     q.pop_front();
//                     q.push_back(x);
//                 }
//             }
//             if(f==0)return q.size();
//         }
//         return 0;
//     }
// };
