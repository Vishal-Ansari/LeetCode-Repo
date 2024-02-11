class Solution{
public:
    vector<int> recamanSequence(int n){
        unordered_set<int> st;
        vector<int> ans(n);
        ans[0]=0;
        st.insert(0);
        for(int i=1;i<n;i++){
            int x=ans[i-1]-i;
            int y=ans[i-1]+i;
            if(x<0 || st.find(x)!=st.end()){
                ans[i]=y;
                st.insert(y);
            }
            else{
                ans[i]=x;
                st.insert(x);
            }
        }
        return ans;
    }
};
