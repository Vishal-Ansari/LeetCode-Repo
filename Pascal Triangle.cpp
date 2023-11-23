class Solution{
public:

    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<long long> prev;
        int mod=1e9+7;
        for (int i = 0; i < n; i++) {
            vector<long long> curr(i + 1, 1);
            for (int j = 1; j < i; j++) {
                curr[j] = (prev[j - 1] + prev[j])%mod ;
            }
            prev = curr;
        }
        return prev ;
    }
};
