class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        int count=0;
        int i=0, j=n-1;
        while(i<j){
            if(arr[i]!=arr[j]) count++;
            i++;
            j--;
        }
        if(count%2==0) return count/2;
        else return 1+ count/2;
    }
};
