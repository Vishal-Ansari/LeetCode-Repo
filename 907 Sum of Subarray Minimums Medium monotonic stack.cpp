


class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int MOD=1e9+7;
        vector<int> left(n,-1), right(n,n);
        // for every i find the Next smaller element to left and right
        // Left
        stack<int> st;
        for(int i=0; i<n; i++){
            while(st.size() && arr[i] < arr[st.top()]) st.pop();
            if(st.size()) left[i] = i - st.top();
            else left[i] = i+1;
            st.push(i);
        }
        while(st.size()) st.pop();
        // Right
        for(int i=n-1; i>=0; i--){
            while(st.size() && arr[i] <= arr[st.top()]) st.pop();
            if(st.size()) right[i] = st.top() - i;
            else right[i] = n - i;
            st.push(i);
        }
        int res = 0;
        for(int i=0; i<n; i++)        {
            long long prod = (left[i]*right[i])%MOD;
            prod = (prod*arr[i])%MOD;
            res = (res + prod)%MOD;
        }
        
        return res%MOD;
    }
};



//BRUTE FORCE TLE

// class Solution {
// public:
//     int sumSubarrayMins(vector<int>& arr) {
       
//         vector<int> v;
//         int sum=0;
//         int mod=1e9+7;
//         for(int i=0;i<arr.size();i++){
//             for(int j=i;j<arr.size();j++){
//                 v.push_back(arr[j]);
//                 sum=(sum+*min_element(v.begin(),v.end()))%mod;
//             }
//             v.clear();
//         }
//         return sum;
//     }
// };
