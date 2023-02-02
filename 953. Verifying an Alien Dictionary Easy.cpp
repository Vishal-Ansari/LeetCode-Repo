class Solution {
public:
    bool isAlienSorted(vector<string>& word, string order) {
        for (int i = 1; i < word.size(); i++) {
            string w1= word[i-1];
            string w2= word[i];

            for (int j = 0; j < w1.size(); j++){
                if (j == w2.size()) return false;
                if (order.find(w1[j])  < order.find(w2[j])) break;
                if (order.find(w1[j]) > order.find(w2[j])) return false;
            }
        }
        return true;
    }
};




class Solution {
public:
    bool isAlienSorted(vector<string>& word, string order) {
        unordered_map<char,int> mp;
        for (int i = 0; i < order.size(); i++)
            mp[order[i]] = i;

        for (int i = 1; i < word.size(); i++) {
            string w1= word[i-1];
            string w2= word[i];

            for (int j = 0; j < w1.size(); j++){
                if (j == w2.size()) return false;

                if (mp[ w1[j] ] < mp[ w2[j] ]) break;
                if (mp[ w1[j] ] > mp[ w2[j] ]) return false;
            }
        }
        return true;
    }
};
