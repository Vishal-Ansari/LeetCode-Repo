/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo = 1;
        int hi = n;
        while (lo <= hi) {
            const int mid = lo + (hi - lo) / 2;
            const int g = guess(mid);
            if (g == 0) {
                return mid;
            } else if (g == -1) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        // unreachable
        assert(false);
        return -1;
    }
};
