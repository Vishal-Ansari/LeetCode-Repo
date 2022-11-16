class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil(((n-i)*(i+1)+1)/2)* arr[i];
        }
        return sum;
    }
};
