// class Solution {
// public:
//    bool checkIfPangram(string sentence) {
    
//     vector<int> freq(26);                      //create a frequency vector 
    
//     for(auto ch:sentence) freq[ch-'a']++;      //update count of each character
    
//     for(auto it:freq){                         //traverse freq vector
//         if(it==0) return false;                //if any aplhabet's occurence is 0
//     }                                          //return false;
//     return true;
// }
// };


class Solution {
public:
    bool checkIfPangram(string sentence) {
        return unordered_set<char>(sentence.begin(), sentence.end()).size() == 26;
    }
};

// class Solution {
//     public boolean checkIfPangram(String sentence) {
//         return sentence.chars().distinct().count() == 26;
//     }
// }
