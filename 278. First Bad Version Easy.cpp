class Solution {
public:
    int firstBadVersion(int n) {
       int high=n;
        int low=0;
        int ans;
        while(low<=high){
             int mid=low+(high-low)/2;
            if(isBadVersion(mid)){
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }

        return ans; 

    }
};
