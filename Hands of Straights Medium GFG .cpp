// using only map 
class Solution {
  public:
bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        if(N%groupSize!=0) return 0;
        map<int,int> mp;
        for(auto x: hand){
            mp[x]++;
        }
        while(!mp.empty()){
            int a=mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp[a+i]==0) return 0;
                else if(--mp[a+i]==0) mp.erase(a+i);
            }
        }
        return 1;
    }
};


// using map and heap
// class Solution {
//   public:
//     bool isStraightHand(int N, int groupSize, vector<int> &hand) {
//         if(N%groupSize>0){
//             return false;
//         }
//         map<int,int> mp;
//         for(auto it:hand){
//             mp[it]++;
//         }
//         priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
//         for(auto it:mp){
//             pq.push({it.first,it.second});
//         }
//         int cnt=0;
//         int last=-1;
//         queue<pair<int,int>> q;
//         while(pq.size()>0){
//             int t=pq.top().first;
//             int val=pq.top().second;
//             pq.pop();
    
//             if(val-1>0){
//                 q.push({t,val-1});
//             }
           
//             cnt++;
//             if(last>=0){
//                 if(t-last!=1){
//                     return false;
//                 }else{
//                     last=t;
//                 }
//             }
//             last=t;
//             if(cnt==groupSize){
//                 while(q.size()>0){
//                     pq.push(q.front());
//                     q.pop();
//                 }
//                 last=-1;
//                 cnt=0;
//             }
//         }
//         if(cnt>0){
//             return false;
//         }
//         return true;
//     }
// };
