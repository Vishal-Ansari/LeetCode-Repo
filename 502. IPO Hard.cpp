  class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>> projects(n);
        for(int i=0;i<n;i++){
            projects[i]={capital[i],profits[i]};
        }
        sort(projects.begin(),projects.end());
        priority_queue<int> maxCapital;
        int i=0;
        while(k--){
            while(i<n && projects[i].first<=w){
                maxCapital.push(projects[i].second);
                i++;
            }
            if(maxCapital.empty()) break;
            w+=maxCapital.top();
            maxCapital.pop();
        }
        return w;
    }
};


     
