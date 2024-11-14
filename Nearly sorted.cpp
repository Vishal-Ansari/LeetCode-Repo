class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        int n=arr.size();
        for(int i=0;i<=k;i++) q.push(arr[i]);
        int i=0,j=k+1;
        while(j<n){
            int x=q.top();
            q.pop();
            arr[i]=x;
            q.push(arr[j]);
            i++;
            j++;
        }
        while(i<n){
            arr[i]=q.top();
            q.pop();
            i++;
        }
    }
};
