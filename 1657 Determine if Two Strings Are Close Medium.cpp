class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>v1;
        vector<int>v2;
        for(auto c:word1) mp1[c]++;
        for(auto c:word2) mp2[c]++;

        for(auto x: mp1){
            auto it=x.first;
            if(mp2.find(it)==mp2.end())
            return false;
        }
        for(auto x: mp2){
            auto it=x.first;
            if(mp2.find(it)==mp2.end())
            return false;
        }

        for(auto x:mp1){
            auto a=x.second;
            v1.push_back(a);
        }
        for(auto x:mp2){
            auto a=x.second;
            v2.push_back(a);
        }
         sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
         if(v1.size()!=v2.size()) return false;

         for(int i=0;i<v1.size();i++){
             if(v1[i]!=v2[i])
             return false;
         }
         return true;
    }
};








class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        int n = word1.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i= 0 ; i < n ; ++i){
            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
        }
        sort(freq1.rbegin(),freq1.rend());
        sort(freq2.rbegin(),freq2.rend());
        if(set(word1.begin(),word1.end())!=set(word2.begin(),word2.end()))
            return false;
        for(int i= 0;i<26;++i){
            if(freq1[i]!=freq2[i])
                return false;
        }
        return true;
    }
};
