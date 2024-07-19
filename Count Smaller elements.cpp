class Solution {
public:
    vector<int> constructLowerArray(vector<int>& a) {
        int n=a.size();
        vector<int> ans(n);
        int k = n - 2;
        vector<int> arr;
        arr.push_back(a[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            int idx = binaryS(arr, a[i], 0, arr.size() - 1);
            ans[k--] = idx;
            arr.insert(arr.begin() + idx, a[i]);
        }
        return ans;
    }

    int binaryS(vector<int>& arr, int key, int l, int h) {
        if (l <= h) {
            int mid = (l+h) / 2;
            if (arr[mid] >= key) {
                return binaryS(arr, key, l, mid - 1);
            }
            return binaryS(arr, key, mid + 1, h);
        }
        return l;
    }
};
