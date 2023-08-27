class Solution
{
    public:
    string reverseWord(string str)
    {
        reverse(str.begin(),str.end());
        return str;
    }
};
