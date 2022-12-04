class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wait=0;
        int t=0;
        for(auto x: customers){
            t=max(t,x[0]);
            t+=x[1];
            wait+=(t-x[0]);
        }
        return wait/customers.size();
    }
};
