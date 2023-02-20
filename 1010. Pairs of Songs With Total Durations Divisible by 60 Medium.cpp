
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<long long> freq(60,0);
        long long count=0;
        int n=time.size();
        for(int i=0;i<n;i++)
        {
            int rem = time[i]%60;
            freq[rem]++;
        }
        for(int i=1;i<30;i++)
        {
            count += (long long) freq[i]*freq[60-i];
        }
        count += (long long)(freq[0]*(freq[0]-1) )/2 ;
        count += (long long)(freq[30]*(freq[30]-1) )/2 ;
        return count;
    }
};




// class Solution {
// public:
//     int numPairsDivisibleBy60(vector<int>& time) {
//          int count=0;
//         vector<int>v(60,0);
//         for(int i=0;i<time.size();i++)
//         {
//             int a=time[i]%60;
//             if(a==0)
//                 count+=v[0];
//             else
//                 count+=v[60-a];
//             v[a]++;
//         }
//         return count;
//     }
// };
