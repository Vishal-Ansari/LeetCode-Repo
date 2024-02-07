// class Solution {
// public:
//     static bool cmp(pair<char, int>& a, pair<char, int>& b)
//     {
//         return a.second > b.second;
//     }

//     void sortt(map<char, int>& M){
//         vector<pair<char, int> > A;
//         for (auto& it : M) {
//             A.push_back(it);
//         }
//         sort(A.begin(), A.end(), cmp);
//     }

//     string frequencySort(string s) {
//         map<char,int>M;
//         for(int i=0;i<s.size();i++) M[s[i]]++;

//         sortt(M);

//         string ans;

//         for(auto x:M){
//         auto key=x.first;
//         auto count=x.second;
//         while(count--){
//             ans+=key;
//         }
        
//         }
//         return ans;

//     }
// };


class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        vector<string> bucket(s.size()+1, "");
        string res;
        
        
        for(char c:s) freq[c]++;
        //put character into frequency bucket
        for(auto& it:freq) {
            int n = it.second;
            char c = it.first;
            bucket[n].append(n, c);
        }
        //form descending sorted string
        for(int i=s.size(); i>0; i--) {
            if(!bucket[i].empty())
                res.append(bucket[i]);
        }
        return res;
    }
};
