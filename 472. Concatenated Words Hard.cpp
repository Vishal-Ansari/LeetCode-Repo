class Solution {
public:
    set<string> s;
    bool checkConcatenate(string word) {
        for(int i = 1; i < word.length(); i++) {
            string prefixWord = word.substr(0, i);
            string suffixWord = word.substr(i, word.length()-i);
            if(s.find(prefixWord) != s.end() && (s.find(suffixWord) != s.end() || checkConcatenate(suffixWord)))
                return true;
        }
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> concatenateWords;
        for(string word : words)
            s.insert(word);
        for(string word : words) {
            if(checkConcatenate(word) == true)
                concatenateWords.push_back(word);
        }
        return concatenateWords;
    }
};
