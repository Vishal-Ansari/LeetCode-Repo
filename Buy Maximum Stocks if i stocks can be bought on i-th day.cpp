class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i)
            v.push_back({price[i], i + 1});

        sort(v.begin(), v.end());

        int ans = 0;

        for (auto it: v) {
            int maxBuy = min(k / it.first, it.second);
            ans += maxBuy;
            k -= it.first * maxBuy;
        }
        return ans;
    }
};
