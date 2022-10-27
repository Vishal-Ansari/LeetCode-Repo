class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        for(int i=d.size()-1;i>=0;i--){
            if(d[i]<9){
                d[i]++;
                return d;
            }
            else{
                d[i]=0;
            }
        }
        d.push_back(0);
        d[0]=1;
        return d;
    }
};




// // runtime error

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         vector<int> result;
//         int size = digits.size();
//          long long x=0;
//         for(int i=0;i<size;i++){
//             x=x*10+digits[i];
//         }
//         x=x+1;
//         while(x>0){
//             result.push_back(x%10);
//             x=x/10;
//         }
//         reverse(result.begin(),result.end());
//         return result;
//     }
// };





// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         vector<int> result;
//         int size = digits.size();
//         for(int i=0; i < size ; i++){
//             if(i==size-1){
//                 if(digits[i]==9){
//                     if(i==0){
//                         result.push_back(1);
//                     }
//                     else{
//                         int prev = i-1;
//                         while(1){
//                             if(prev==0 && result[prev]==9){
//                                 result[prev]=0;
//                                 result.insert(result.begin(), 1);
//                                 break;
//                             }
//                             if(result[prev]==9){
//                                 result[prev]=0;
//                                 prev--;
//                             }
//                             else{
//                                 result[prev]+=1;
//                                 break;
//                             }
//                         }
//                     }
//                     result.push_back(0);
//                     break;
//                 }
//                 else{
//                     result.push_back(digits[i]+1);
//                     break;
//                 }
//             }
//             else{
//                 result.push_back(digits[i]);
//             }
//         }    
//         return result;
//     }
// };
