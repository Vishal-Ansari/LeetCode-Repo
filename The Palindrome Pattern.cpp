class Solution {
  public:
    
    bool isPalindromeR(int row,int n, vector<vector<int>> &arr){
        int s=0,l=n-1;
        while(s<l){
            if(arr[row][s]!=arr[row][l]) return false;
            s++;
            l--;
        }
        return true;
    }
    
    bool isPalindromeC(int col,int n, vector<vector<int>> &arr){
        int s=0,l=n-1;
        while(s<l){
            if(arr[s][col]!=arr[l][col]) return false;
            s++;
            l--;
        }
        return true;
    }
    
    string pattern(vector<vector<int>> &arr) {
        int n=arr.size();
        for(int row=0;row<n;row++){
            bool p=isPalindromeR(row,n,arr);
            if(p==true) return to_string(row)+" R";
        }
        for(int col=0;col<n;col++){
            bool p=isPalindromeC(col,n,arr);
            if(p==true) return to_string(col)+" C";
        }
        return "-1";
    }
};
