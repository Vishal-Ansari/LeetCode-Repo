class Solution{
public:
	// #define ll long long
	 int mod=1e9+7;
    ll countStrings(int n) {
        ll f=1;
        ll s=2;
        
        for(int i=2;i<=n;i++){
            ll t=(f+s)%mod;
            f=s;
            s=t;
        }
        return s;
	}
};
