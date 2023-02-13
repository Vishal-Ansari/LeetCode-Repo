class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low;low<=high;low++){
            if(low%2!=0) ans++;
        }
        return ans;
    }
};
