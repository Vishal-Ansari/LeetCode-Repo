class Solution{
public:
	long long sumBitDifferences(int arr[], int n) {
	   long long ans = 0;
	   for(int i = 0;i<32;i++){
	       long long count = 0;
	       for(int j = 0;j<n;j++){
	           if(arr[j]&(1<<i))count++;
	       }
	       ans+=count*(n-count)*2;
	   }
	   return ans;
	}
};
