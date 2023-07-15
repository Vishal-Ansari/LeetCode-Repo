class Solution
{
    public:
       void solve(stack<int>& s, int n, int ind) {
        if (ind == n/2)
        {
            s.pop();
            return;
        }
        
        int x = s.top();
        s.pop();
        ind++;
        
        solve(s, n, ind);
        
        s.push(x);
      } 
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        solve(s,sizeOfStack,0);
    }
};
