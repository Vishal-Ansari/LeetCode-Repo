

class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        
        int n = events.size();
        int events_attend = 0;
		int i = 0;
        
        sort(events.begin(),events.end());
        
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int d=1;d<=100002;d++){
            
            while(i<n && events[i][0]==d){
                pq.push(events[i][1]);
                i++; 
            }
            
            while(!pq.empty() && pq.top() < d){
                pq.pop();
            }
            
            if(!pq.empty()){
                pq.pop();
                events_attend++;
            }
            
        }
        
        return events_attend;
        
    }
};












//TLE

// class Solution {
// public:
//     static bool cmp(vector<int>&a , vector<int>&b){
//         if(a[1]<b[1]) return true;
//         else if( a[1]==b[1]) return a[0]<b[0];
//         return false;
//     }
//     int maxEvents(vector<vector<int>>& events) {
//         sort(events.begin(),events.end(),cmp);
//         int count=0;
//         set<int>days;
//         for(int i=1;i<=100000;++i) days.insert(i);
        
//         for(const auto & event: events){
//             int s=event[0] ,e=event[1];
//             auto it=days.lower_bound(s);
//             if(it==days.end() || *it>e)
//                 continue;
//             else{
//                 ++count;
//                 days.erase(it);
//             }
//         }
//         return count;
//     }
// };
