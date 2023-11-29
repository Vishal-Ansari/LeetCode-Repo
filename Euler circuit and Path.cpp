class Solution {
public:
    int isEulerCircuit(int V, vector<int>adj[]){
        int odd = 0;
        for (int i = 0; i < V; ++i) {
            if (adj[i].size() % 2 != 0){
                odd += 1;
            }
        }       
        if (odd > 2) {
            return 0;
        }
        return (odd == 0) ? 2 : 1;       
    }
}; 
