class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        stack<int> st,st1;
        st.push(arr[0]);
        vector<int> left(n,0);
        vector<int> right(n,0);
        for(int i=1;i<n;i++){
            while(!st.empty() && arr[i]<=st.top()){
                st.pop();
            }
            if(!st.empty()){
                left[i] = st.top();
            }
            st.push(arr[i]);
        }
        st1.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!st1.empty() && arr[i]<=st1.top()){
                st1.pop();
            }
            if(!st1.empty()){
                right[i] = st1.top();
            }
            st1.push(arr[i]);
        }
        
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,abs(left[i]-right[i]));
        }
        
        return ans;
    }
};
