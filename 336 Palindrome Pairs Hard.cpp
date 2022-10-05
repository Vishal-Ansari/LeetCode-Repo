class Solution {
public:
    bool isPalindrome(string& s) {   
          int l=0, r=s.size()-1;
          while(l<r){if(s[l++]!=s[r--]) return false;}
          return true; 
    }


    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> ans;
        int n = words.size();
        if(n<2) return ans;
        unordered_map<string, int> m;
        for(int i=0;i<n;++i){
            
            auto s= words[i];
            reverse(s.begin(),s.end());
            m[s]=i;
        }
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<=words[i].size(); ++j){
                string st1 = words[i].substr(0,j); // prefix
                string st2 = words[i].substr(j);    //sufix           
                 
                 if(m.count(st1) && isPalindrome(st2) && m[st1] != i) {
                     ans.push_back({i, m[st1]});    
                 }

                 if(!st1.empty() && m.count(st2) && isPalindrome(st1) && m[st2] != i) {
                     ans.push_back({m[st2], i});
                 }
            }            
        }
        return ans;
    }
};



















//JAVA



class Solution {
    private static class TrieNode {
    TrieNode[] next;
    int index;
    List<Integer> list;
    	
    TrieNode() {
    	next = new TrieNode[26];
    	index = -1;
    	list = new ArrayList<>();
    }
}
    
public List<List<Integer>> palindromePairs(String[] words) {
    List<List<Integer>> res = new ArrayList<>();

    TrieNode root = new TrieNode();
		
    for (int i = 0; i < words.length; i++) {
        addWord(root, words[i], i);
    }
		
    for (int i = 0; i < words.length; i++) {
        search(words, i, root, res);
    }
    
    return res;
}
    
private void addWord(TrieNode root, String word, int index) {
    for (int i = word.length() - 1; i >= 0; i--) {
        int j = word.charAt(i) - 'a';
				
        if (root.next[j] == null) {
            root.next[j] = new TrieNode();
        }
				
        if (isPalindrome(word, 0, i)) {
            root.list.add(index);
        }
				
        root = root.next[j];
    }
    	
    root.list.add(index);
    root.index = index;
}
    
private void search(String[] words, int i, TrieNode root, List<List<Integer>> res) {
    for (int j = 0; j < words[i].length(); j++) {	
    	if (root.index >= 0 && root.index != i && isPalindrome(words[i], j, words[i].length() - 1)) {
    	    res.add(Arrays.asList(i, root.index));
    	}
    		
    	root = root.next[words[i].charAt(j) - 'a'];
      	if (root == null) return; 
    }
    	
    for (int j : root.list) {
    	if (i == j) continue;
    	res.add(Arrays.asList(i, j));
    }
}
    
private boolean isPalindrome(String word, int i, int j) {
    while (i < j) {
    	if (word.charAt(i++) != word.charAt(j--)) return false;
    }
    	
    return true;
}
}

//Brute Force TLE error

// class Solution {
// public:
//     vector<vector<int>> palindromePairs(vector<string>& words) {
//      vector<vector<int>> ans;
//         for(int i=0;i<words.size();i++){
//             for(int j=i+1;j<words.size();j++){
//                     if(i!=j){
//                             string s=words[i]+words[j];
//                             string s1=words[j]+words[i];
//                             string s2=s;
//                             string s3=s1;
//                             reverse(s2.begin(),s2.end());
//                             reverse(s3.begin(),s3.end());
//                         if(s==s2)
//                             ans.push_back({i,j});
//                         if(s1==s3)
//                             ans.push_back({j,i});
//                     }
//             }
//         }
//         return ans;
//     }
// };