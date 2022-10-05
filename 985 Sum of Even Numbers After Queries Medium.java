class Solution {
    public int[] sumEvenAfterQueries(int[] nums, int[][] queries) {
        int[] ans = new int[queries.length];
        int se = 0;
        for(int i:nums){
            if((i&1)==0)
                se+=i;
        }
        int i=  0;
        for(int[] q:queries){
            int val = q[0];
            int idx = q[1];
            if((nums[idx]&1)==0){
                se-=nums[idx];
                nums[idx] += val;
                if((nums[idx]&1)==0)
                    se+=nums[idx];
            }else{
                nums[idx] += val;
                if((nums[idx]&1)==0)
                    se+=nums[idx];
            }
            ans[i++] = se;

        }
        return ans;
    }
}