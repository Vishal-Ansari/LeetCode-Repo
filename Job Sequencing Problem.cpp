class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static comp(Job a, Job b){
        return a.profit> b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        int count=0,profit=0;
        sort(arr,arr+n,comp);
        int maxi=arr[0].dead;
        for(int i=0;i<n;i++) maxi=max(maxi,arr[i].dead);
        int slot[maxi+1];
        for(int i=0;i<=maxi;i++) slot[i]=-1;
        
         int countJobs = 0, jobProfit = 0;

        for (int i = 0; i < n; i++) {
         for (int j = arr[i].dead; j > 0; j--) {
            if (slot[j] == -1) {
               slot[j] = i;
               countJobs++;
               jobProfit += arr[i].profit;
               break;
            }
         }
      }
      return {countJobs,jobProfit};
        
    } 
};
