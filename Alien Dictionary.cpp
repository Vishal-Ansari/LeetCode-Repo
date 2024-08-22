class Solution{
    public:
    string findOrder(string dict[], int n, int K) {
        // topo sort bfs
        vector<int> adj[K], indeg(K);
        for(int i=0;i<n-1;i++) {
            string s1=dict[i];
            string s2=dict[i+1];
            int len=min(s1.length(),s2.length());
            for(int j=0;j<len; j++) {
                if(s1[j] != s2[j]) {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    indeg[s2[j] - 'a']++;
                    break;
                }
            }
        }
        queue<int> q;
        for(int i=0;i<K;i++) {
            if(indeg[i] == 0) q.push(i);
        }
        string ans;
        while(q.size()) {
            int node = q.front();
            q.pop();
            ans.push_back(char(node + 'a'));
            for(int i : adj[node]) {
                indeg[i]--;
                if(indeg[i] == 0) q.push(i);
            }
        }
        return ans;
    }
};
