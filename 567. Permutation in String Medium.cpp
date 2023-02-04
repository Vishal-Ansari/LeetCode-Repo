class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> cnt(26, 0);
        for(auto x: s1){
            cnt[x - 'a']++;
        }

        int n1 = s1.size(), n2 = s2.size();

        for(int i = 0; i < n2 - n1 + 1; i++){
            vector<int> cnt2(26, 0);
            for(int j = i; j < i + n1; j++){
                cnt2[s2[j] - 'a']++;
            }
            if(cnt == cnt2) return true;
        }
        return false;
    }
};
