class Solution {
public:
    int minDist(int arr[], int n, int x, int y) {
        int ans = INT_MAX;
        int a = -1;
        int b = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                a = i;
                if (b != -1) {
                    int diff = abs(a - b);
                    ans = min(ans, diff);
                }
            }
            if (arr[i] == y) {
                b = i;
                if (a != -1) {
                    int diff = abs(a - b);
                    ans = min(ans, diff);
                }
            }
        }
        if (a == -1 || b == -1) return -1;
        return ans;
    }
};
