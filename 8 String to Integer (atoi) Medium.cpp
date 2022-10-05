class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
            c++;
    }
          if (c == n)
          return 0;
        else{
    stringstream s1(s);
    int x;
    s1>>x;
        
        return x;
    }
    }
};