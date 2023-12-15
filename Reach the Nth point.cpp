class Solution{
	public:
		int nthPoint(int n){
		    int mod=1e9+7;
		    if(n==1) return 1;
		    if(n==2) return 2;
		    int f=1;
		    int s=2;
		    for(int i=3;i<=n;i++){
		        int t=(f+s)%mod;
		        f=s;
		        s=t;
		    }
		    return s;
	    }
};
