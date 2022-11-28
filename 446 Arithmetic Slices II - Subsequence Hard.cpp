//from prinzeop3
class Solution {
public:
	int numberOfArithmeticSlices(vector<int>& a) {
		long long ans = 0, n = a.size();
		vector<unordered_map<long, long>> dp(n);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < i; ++j) {
				long long diff = (long long)a[i] - (long long)a[j];

				dp[i][diff]++;
				if (dp[j].count(diff)) {
					dp[i][diff] += dp[j][diff];
					ans += dp[j][diff];
				}
			}
		}
		return ans;
	}
};
