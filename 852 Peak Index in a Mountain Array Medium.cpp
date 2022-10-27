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





// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s=0,end=arr.size()-1, ans=-1;
//         while(s<end){
//             int mid=s+(end-s)/2;
//             if(arr[mid]>arr[mid+1]){
//                 ans=mid;
//                 end=mid;
//             }
//             else{
//                 ans=mid+1;
//                 s=mid+1;
//             }
//         }
//         return ans;
//     }
// };




// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         return max_element(arr.begin(),arr.end())-arr.begin();
//     }
// };
