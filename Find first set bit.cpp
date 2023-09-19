class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int c=1;
        while(n){
            if(1&n) return c;
            else c++;
            
            n=n>>1;
        }
        return 0;
    }
};
