class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr;
        vector<int> ans;
        int ele1=arr[0],ele2=arr[1],c1=0,c2=0;
        for(int i=2;i<n;i++){
            if(arr[i]==ele1){
                c1++;
            }
            else if(arr[i]==ele2){
                c2++;
            }
            else if(c1==0){
                ele1=arr[i];
                c1++;
            }
            else if(c2==0){
                ele2=arr[i];
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==ele1) c1++;
            else if(arr[i]==ele2) c2++;
        }
        if(c1>( n/3)) ans.push_back(ele1);
        if(c2> (n/3)) ans.push_back(ele2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
