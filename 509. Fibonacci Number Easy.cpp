class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n==1) return 1;
        
        int ans = fib(n-1) + fib(n-2);
        return ans;
    }
};



// class Solution {
// public:
//     int fib(int n) {
//         vector<int>fib(n+1);
//         if(n==0) return 0;
//         if(n==1 || n==2) return 1;
//         fib[1]=1;
//         fib[2]=1;
//         for(int i=3;i<=n;i++){
//             fib[i]=fib[i-1]+fib[i-2];
//         }
//         return fib[n];
//     }
// };
