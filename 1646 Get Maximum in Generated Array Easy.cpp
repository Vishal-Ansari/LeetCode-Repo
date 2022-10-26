class Solution {
public:
    int getMaximumGenerated(int n) {
       vector<int>nums(n+1);
        if(n==0||n==1) return n;
        nums[0]=0;
        nums[1]=1;
        int mx=1;
        for(int i=1;i<=n/2;i++){
            if(2*i>=2 && 2*i<=n){
                nums[2*i]=nums[i];
                mx=max(mx,nums[2*i]);
            }
            if(2*i+1>=2 && 2*i+1<=n){
                    nums[2*i+1]=nums[i]+nums[i+1];
                    mx=max(mx,nums[2*i+1]);
            }
        }
        return mx;
    }
};


// class Solution {
// public:
//     int getMaximumGenerated(int n) {
//        vector<int>nums(n+1);
//         if(n==0 || n==1) return n;
//         nums[0]=0;
//         nums[1]=1;
//         int mx=1;
//         for(int i=2;i<=n;i++){
//            if(i%2){
//                nums[i]=nums[i/2]+nums[i/2+1];
//            }
//             else{
//                  nums[i]=nums[i/2];
//             }
//             mx=max(mx,nums[i]);
//         }
//         return mx;
//     }
// };
