class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int x,i,max=0,flag=-1;
        x=arr.size();
        if(x>=3)
        {
            for(i=0;i<x;i++)
            {
                if(max<arr[i])
                {
                    max=arr[i];
                    flag=i;
                }
            }
        }
            return flag;
    }
};

// or simply
//return max_element(arr.begin(),arr.end())-arr.begin();
