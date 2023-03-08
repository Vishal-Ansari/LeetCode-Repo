class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long left=1;
        long long right=*max_element(piles.begin(),piles.end());

        while(left<=right){
            int mid=left+(right-left)/2;
            long long count=0;
            for(int i=0;i<piles.size();i++){
                int x=piles[i];
                if(x<mid)
                 count++;
                else
                {
                    count+= ((x/mid) + (x%mid!=0));
                }
                
            }

            if(count>h)
            left=mid+1;
            else
            right=mid-1;
        }
        return left;
    }
};
