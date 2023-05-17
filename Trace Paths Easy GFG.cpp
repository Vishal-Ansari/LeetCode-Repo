// iterative 

class Solution {
public:
    int isPossible(int n, int m, const string& s) {
        int x=0,y=0, maxx=0,minx=0,maxy=0,miny=0;
        for(auto c: s){
            if(c=='L') x--;
            else if(c=='R') x++;
            else if(c=='U') y++;
            else if(c=='D') y--;
            
            maxx=max(maxx,x);
            maxy=max(maxy,y);
            minx=min(minx,x);
            miny=min(miny,y);
        }
        if( (maxx-minx)<m  && (maxy-miny)<n) return 1;
        
        return 0;
    }
};


//  Recursion (TLE)

// class Solution {
// public:
//     bool find(int ind, int i, int j, int n, int m, string s) {
//         if (i < 0 || i >= n || j < 0 || j >= m) return false;
//         if (ind >=s.length()) return true;
//         if (s[ind] == 'L') return find(ind + 1, i, j - 1, n, m, s); 
//         if (s[ind] == 'R') return find(ind + 1, i, j + 1, n, m, s); 
//         if (s[ind] == 'U') return find(ind + 1, i + 1, j, n, m, s); 
//         if (s[ind] == 'D') return find(ind + 1, i - 1, j, n, m, s); 
//         return false;
//     }
    
//     int isPossible(int n, int m, string s) {
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (find(0, i, j, n, m, s) == true)
//                     return 1;
//             }
//         }
//         return 0;
//     }
// };
