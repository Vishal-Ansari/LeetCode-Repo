

//cpp

class Solution {
    public:
        bool reorderedPowerOf2(int n) {
            if(n == 1) return true;
            unordered_map<int, int> map;
            string temp = to_string(n);
            for(int i = 0; i < temp.size(); i++){
                map[int(temp[i])-48]++;
            }  
            
            int digits = temp.size();
            return helper(map, 2, n, digits);
        }
        
        bool helper(unordered_map<int, int> map, long k, int s, int digits){
            if(k > pow(10, digits) - 1) return false;
            if(k == s) return true;
            
            unordered_map<int, int> copy = map;
            
            string temp = to_string(k);
            for(int i = 0; i < temp.size(); i++){
                copy[int(temp[i])-48]--;
            }
            
            for(auto &it: copy){
                if(it.second != 0) return helper(map, k*2, s, digits);
            }
            
            return true;
        }
    };




























// JAVA
public class Solution {
    public boolean reorderedPowerOf2(int N) {
        int[] digits = new int[10];
        for (int i = N; i > 0; i /= 10) 
        {
            digits[i % 10]++;
        }
        int num = 1;
        int bits = 1;
        while (bits < 32) {
            if (isDigitsMatch(num, digits)) {
                return true;
            }
            num =num*2;
            ++bits;
        }
        return false;
    }

    private boolean isDigitsMatch(int n, int[] digits) 
    {        
        int[] temp = new int[10];
        for (int i = n; i > 0; i /= 10) 
        {
            temp[i % 10]++;
        }
        int j=0;
        while(j<10)
        {
            if(temp[j]!=digits[j]) return false;
            j++;
        }
        return true;
    }

}
