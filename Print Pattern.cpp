class Solution{
public:
    void printSeq(vector<int>& ans,int N, int x){
        if(N<=0 || N>x){
          ans.push_back(N);
            return;
        }
          ans.push_back(N);
        printSeq(ans,N-5,x);
        if(N<=x){
        ans.push_back(N);
        }
    }
    vector<int> pattern(int N){
        vector<int> ans;
        printSeq(ans,N,N);
        return ans;
    }
};
