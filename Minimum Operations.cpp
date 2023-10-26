class Solution
{
  public:
    int minOperation(int n)
    {
        if(n==1) return 1;
        if(n==2) return 2;
        int steps=2;
        while(n>2){
            if(n%2==0){
                n=n/2;
            }
            else{
                n=n-1;
            }
            steps++;
        }
        return steps;
    }
};
