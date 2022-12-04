class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int alice=0;
        int bob=0;
        int i=0;
        int j=n-1;
        int flag=true;
        while(i<j){
            if(flag){
                if(piles[i]>piles[j]){
                    alice+=piles[i];
                    i++;
                }
                else{
                    alice+=piles[j];
                    j--;
                }
 
            }
            else{
                if(piles[i]<piles[j]){
                    bob+=piles[i];
                    i++;
                }
                else{
                    bob+=piles[j];
                    j--;
                }
            }

            flag=!flag;
        }
        return alice>bob?true:false;
    }
};


//dp
class Solution {
public:
    int dp[501][501];
    int help(int i,int j, vector<int>&p){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=max(p[i]-help(i+1,j,p), p[j]-help(i,j-1,p));
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        memset(dp,-1,sizeof(dp));
        return help(0,n-1,piles);
    }
};






class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};
