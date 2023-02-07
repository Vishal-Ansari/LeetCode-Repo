class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> count; 
        int i, j; 
        for (i = 0, j = 0; j < fruits.size(); ++j) {
            count[fruits[j]]++; 
            if (count.size() > 2) { 
                if (--count[fruits[i]] == 0)count.erase(fruits[i]); 
                i++;
            }
        }
        return j - i; 
    }
};
