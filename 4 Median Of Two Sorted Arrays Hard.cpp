class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int temp=nums1.size() +nums2.size();
        int arr3[temp];
        int i=0,j=0,k=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
                arr3[k++]=nums1[i++];
            else
                arr3[k++]=nums2[j++];
        }
        while(i<nums1.size())
            arr3[k++]=nums1[i++];
        while(j<nums2.size())
            arr3[k++]=nums2[j++];
        
        if(temp%2!=0)
            return arr3[(temp)/2];
        else
            return float(arr3[temp/2]+arr3[(temp-1)/2])/2;
        
    }
};