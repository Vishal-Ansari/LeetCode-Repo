class Solution{
    public:
    int trap(vector<int>& height){
        int n=height.size();
        int lmax[n]; lmax[0]=height[0];
        
            for(int i=1;i<n;i++){
                lmax[i]=max(height[i],lmax[i-1]);
            }
        
        int rmax[n]; rmax[n-1]=height[n-1];
            for(int i=n-2;i>=0;i--){
                rmax[i]=max(height[i],rmax[i+1]);
            }
    
           long long ans=0;
    
        for(int i=0;i<n;i++)
            ans+=min(lmax[i],rmax[i])-height[i];

      return ans;  
    
    }
};











class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();   
        int lo=0;
        int hi=n-1;
        int mi=0;
        int ma=0;
        long long ans=0;
        while(lo<=hi){
            if(height[lo]<height[hi]){
                if(height[lo]>mi){
                mi=height[lo];
                }
                else{
                ans+=mi-height[lo];
                }
                lo++;
                    
            }
            else{
                if(height[hi]>ma){
                    ma=height[hi];
                }
                else{
                    ans+=ma-height[hi];
                }
                hi--;
            }
        }
        return ans;
    }
};