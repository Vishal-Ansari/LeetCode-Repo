class Solution{
public:
	int kSubstrConcat (int n, string s, int k)
	{
	    if(n%k) return 0;
        
        map<string,int>mpp;
        string temp="";
        temp+=s[0];
        
        for(int i=1;i<n;i++){
            if(i%k==0){
                mpp[temp]++;
                temp="";
            }
            temp+=s[i];
        }
        mpp[temp]++;
        
        if(mpp.size()>2)
         return 0;
        return 1;
	}
};
