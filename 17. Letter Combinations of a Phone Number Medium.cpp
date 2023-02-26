class Solution {
public:
    void combinations(string digits, vector<string> &ans, string &temp, vector<string> &keypad,int index){
        if(index==digits.size()){
        ans.push_back(temp);
        return;
        }

        string key= keypad[digits[index]-'0'];
        for(int i=0;i<key.size();i++){
            temp.push_back(key[i]);
            combinations(digits,ans,temp,keypad,index+1);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> keypad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string temp;
        combinations(digits,ans,temp,keypad,0);
        return ans;
    }
};
