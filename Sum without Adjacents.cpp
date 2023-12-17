class Solution{
public:	
	int findMaxSum(int *arr, int n) {
	   // int ans=arr[0];
	   // if(n==1) return arr[0];
	   // if(n==2) return max(arr[0],arr[1]);
	   // if(n==3) return max(arr[1],arr[0]+arr[2]);
	   // int f=arr[0];
	   // int s=arr[1];
	   // int t=max(s, arr[0]+arr[2]);
	   // ans=max(ans,t);
	   // for(int i=3;i<n;i++){
	   //     int sum=max(arr[i]+f,arr[i]+s);
	   //     ans=max(ans,sum);
	   //     f=s;
	   //     s=t;
	   //     t=sum;
	   // }
	   // return ans;
	   
	    if(n==1){
            return arr[0];
        }
        int a=arr[0];
        int b=max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
           int c=max(b,a+arr[i]);
            a=b;
            b=c;
        }
        return b;
	}
};
