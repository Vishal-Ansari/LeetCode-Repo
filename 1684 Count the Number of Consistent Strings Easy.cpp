class Solution {
public:
    
    bool substring(string allowed,string words ){
        int n1=allowed.size();
        int n2=words.size();
        int count=0;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(words[j]==allowed[i])
                    count++;
            }
        }
        if(count>=n2)
            return true;
        else
            return false;
    }
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int n1=allowed.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(substring(allowed,words[i]))
                count++;
        }
        return count;
    }
};






class Solution {
public:
    
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int n1=allowed.size();
        int count=0;
        
        unordered_set<char> st;
        for(auto x: allowed)
            st.insert(x);
        
        for(auto x: words){
            bool status=true;
            for(int i=0;i<x.size();i++){
                if(st.find(x[i])==st.end()){
                    status=false;
                    break;
                }
            }
            if(status)
                count++;
        }
        return count;
    }
};