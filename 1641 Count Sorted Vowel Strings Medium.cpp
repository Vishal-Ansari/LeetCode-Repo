class Solution {
public:
    int countVowelStrings(int n) {
      vector<int>ans(5,1);
      for(int i=2;i<=n;i++){
          for(int i=3;i>=0;i--){
              ans[i]+=ans[i+1];
          }
      }  
      int count=0;
      for(int i=0;i<5;i++) count+=ans[i];
      return count;
    } 
};
// n=1   1 1 1 1 1   5
// n=2   5  4 3 2 1  15
// n=3  15 10 6 3 1  35
/*
a a a   
a a e
a a i
a a o
a a u
5 
a e e
a e i
a e o
a e u
4
a i i
a i o
a i u
3
a o o
a o u
2
a u u
1

e e e
e e i
e e o
e e u
4
e i i
e i o
e i u
3
e o o
e o u
2


*/
