class Solution{
public:
    int help(int i, int j, int n, int m){
        if(j==n)    return 1;
        if(i>m)     return 0;
        
        int pick= help(i*2, j+1, n, m);
        int not_pick=help(i+1, j, n, m);

        return pick+not_pick;
    }
    int numberSequence(int m, int n){
        return help(1,0,n,m);
    }
};
