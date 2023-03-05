class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int, int> m;
        int res = 0, mod = 1e9 + 7;
        for (int i = 0; i < arr.size(); i++) {
            res = (res + m[target - arr[i]]) % mod;
            for (int j = 0; j < i; j++) {
                m[arr[i] + arr[j]]++;
            }
        }
        return res;
    }
};




class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long ans = 0, mod = 1e9 + 7;
        unordered_map<int, long long> mp;
        for( int a : arr) mp[a]++;

        for( auto it: mp){
            for(auto it2: mp){
                int i=it.first, j=it2.first , k=target-i-j;
                if(!mp.count(k)) continue;
                if(i==j && j==k) ans+=mp[i]*(mp[i]-1)*(mp[i]-2)/6;
                else if(i==j && j!=k) ans+=mp[i]*(mp[i]-1)/2*mp[k];
                else if(i<j && j<k) ans+=mp[i]*mp[j]*mp[k];
            }
        }
        return ans%mod;
    }
};









class Solution {
    public int threeSumMulti(int[] arr, int target) {
        long result = 0;
        long count[] = new long[101];
        long mod = 1000000007;
		
		//Couting the occurrence of each number
        for(int i: arr) count[i]++;
        
        for(int i=0;i<101;i++){
            for(int j=i;j<101;j++){
                int k = target - i -j;
                if(k<0 || k>100)
                    continue;
				// if all number are same than use nC3
                if(i==j && j==k){
                    result += (count[i]*(count[i]-1)*(count[i]-2))/6;
                }
				
				//if first two are same than use nC2 * occurence of k
                else if(i==j && j!=k){
                    result += ((count[i]*(count[i]-1))/2)*count[k];
                }
				//Last condition if all number ar different
				else if(i<j && j<k){
                    result += (count[i]*count[j]*count[k]);
                }
                result %= mod;
            }
        }
        return (int)result;
    }
}
