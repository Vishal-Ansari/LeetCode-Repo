class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        int count=0, cus=0, wait=0,pmax=-1,ans;
        
        for(int i=0;i<customers.size()||(wait);i++){
             count++;
            wait+=i<customers.size()?customers[i]:0;
                if(wait<4){
                    cus+=wait;
                    wait=0;
                }
                else{
                    cus+=4;
                    wait-=4;
                }
               int profit=cus*boardingCost-count*runningCost;
                if(profit>pmax){
                    pmax=profit;
                    ans=count;
                }

            }
            
        return pmax>0?ans:-1;
    }
};





