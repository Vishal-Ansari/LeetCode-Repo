class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long>ans;
        ans.push_back(1);
        long long f=0;
        long long s=1;
        long long num;
        while(n>1){
            num=f+s;
            ans.push_back(num);
            f=s;
            s=num;
            n--;
        }
        return ans;
    }
};
