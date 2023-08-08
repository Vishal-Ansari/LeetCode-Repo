 class Solution{
    public:
     int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    int countFractions(int n, int numerator[], int denominator[]){
        map<pair<int ,int>, int > mp;
        int ans = 0;
        for(int i=0; i<n; i++) {
            int d = gcd(numerator[i], denominator[i]);
            numerator[i] /= d;
            denominator[i] /=d;
            int x, y;
            x = numerator[i];
            y = denominator[i];
            int z = y - x;
            if(mp.count({z, y}))
                ans += mp[{z, y}];
            mp[{x,y}]++;
        }
        return ans;
    }
};
