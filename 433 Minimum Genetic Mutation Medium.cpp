class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> sets;
        for (auto& s : bank) {
            sets.insert(s);                
        }
        vector<char> chs = {'A', 'G', 'C', 'T'};
        int step = 0;
        queue<string> q;
        q.push(start);
        for (;!q.empty();) {
            int sz = q.size();
            while (sz--) {
                string s = q.front();
                q.pop();
                if (s == end) {
                    return step;
                }
                for (int i = 0; i < 8; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        if (chs[j] != s[i]) {
                            char tmp = s[i];
                            s[i] = chs[j];
                            if (sets.count(s)) {
                                sets.erase(s);
                                q.push(s);
                            }
                            s[i] = tmp;
                        }
                    }
                }
            }
            ++step;
        }
        return -1;
    }
};
