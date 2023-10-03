class Solution{
    public:
    string colName (long long int n)
    {
        string   s = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
        string ans = "";
        while (n>0){
            int rem = n % 26;
            ans = s[rem] + ans;
            if (rem == 0) rem = 26;
            n -= rem;
            n /= 26;
        }
        return ans;
    }
};
