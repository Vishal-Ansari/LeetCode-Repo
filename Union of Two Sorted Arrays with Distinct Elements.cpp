class Solution {
  public:
   vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>ans;
        int n=a.size(),m=b.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else if(b[j]<a[i]){
                ans.push_back(b[j]);
                j++;
            }
            else{
                ans.push_back(a[i]);
                i++,j++;
            }
            
        }
        while(i<n){
            ans.push_back(a[i]);
            i++;
        }
        while(j<m){
            ans.push_back(b[j]);
            j++;
        }
        return ans;
}
}:
