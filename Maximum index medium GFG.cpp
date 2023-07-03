class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
         vector<int> right(n); // max, j
        vector<int> left(n);  // min, i
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++) left[i] = min(arr[i], left[i - 1]);


    for (int j = n - 2; j >= 0; j--) right[j] = max(arr[j], right[j + 1]);
    

    int i = 0, j = 0, ans = 0;
    while (j < n && i < n) {
        if (left[i] <= right[j]) {
            ans = max(ans, j - i);
            j++;
        } else {
            i++;
        }
    }

    return ans;
    }

};
