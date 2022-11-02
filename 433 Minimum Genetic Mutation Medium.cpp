class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        if(start==end){
            return 0;
        }
        
        unordered_set<string> allowed;
        unordered_set<char> characters;
        unordered_set<string> processed;
        
        characters.insert('A');
        characters.insert('C');
        characters.insert('G');
        characters.insert('T');
        
        for(int i=0;i<bank.size();i++){
            allowed.insert(bank[i]);
        }
        
        queue<string> q;
        q.push(start);
        processed.insert(start);
        
        int level=0;
        
        while(!q.empty()){
            
            int k=q.size();
            
            while(k--){
            
                string str=q.front();
                q.pop();
                for(int i=0;i<str.size();i++){
                    for(auto x:characters){
                        string change=str;
                        change[i]=x;
                        if(processed.find(change)==processed.end() && allowed.find(change)!=allowed.end()){  
                            if(change==end){
                                return level+1;
                            }
                            processed.insert(change);
                            q.push(change);
                        }
                    }  
                }

            }
            
            level++;
        }
        
        return -1;
        
    }
    
};





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
