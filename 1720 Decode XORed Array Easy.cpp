class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int> ans(n+1);
        ans[0]=first;
        int pre_xor=0;
        for(int i=0;i<n;i++){
            pre_xor=ans[i];
            ans[i+1]=pre_xor^encoded[i];
            //or
            // ans[i+1]=ans[i]^encoded[i];
        }
        return ans;
    }
};
