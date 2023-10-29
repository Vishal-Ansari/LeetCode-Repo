class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        while(k--){
            n=n>>1;
        }
        return n&1;
    }
};
