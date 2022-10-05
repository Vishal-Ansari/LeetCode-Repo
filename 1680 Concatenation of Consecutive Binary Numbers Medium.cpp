
class Solution {
public:
    
    int numberOfBits(int n) {
		  return log2(n) + 1;
    }
    
    int concatenatedBinary(int n) {
        long ans = 0, MOD = 1e9 + 7;
        
        for (int i = 1; i <= n; ++i) {
            int len = numberOfBits(i);
            ans = ((ans << len) % MOD + i) % MOD;
        }
        return ans;
    }
};












// class Solution {
// public:
//     string decToBinary(int n){
//     string b="";
//     int i = 0;
//     while (n > 0) {
//         // storing remainder in binary array
//         b+=to_string(n % 2);
//         n = n / 2;
//         i++;
//     }
 
//     return b;
// }
    
//     int binaryToDecimal(int n){
//     int num = n;
//     int dec_value = 0;
 
//     // Initializing base value to 1, i.e 2^0
//     int base = 1;
//     int temp = num;
//     while (temp) {
//         int last_digit = temp % 10;
//         temp = temp / 10;
 
//         dec_value += last_digit * base;
 
//         base = base * 2;
//     }
//     return dec_value;
// }
    
    
//     int concatenatedBinary(int n) {
//         string s="";
//         for(int i=1;i<=n;i++){
//             s+=decToBinary(i);
//         }
//         int g=stoi(s);
//         int ans=  binaryToDecimal(g);
//         return ans;
        
//     }
// };


