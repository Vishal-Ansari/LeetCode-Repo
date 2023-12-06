class Solution {
  public:
    int countX(int L, int R, int X) {
        int count=0;
      for(int a=L+1; a<R; a++){
      int temp =a;
      while(temp > 0){
            int digit = temp % 10; 
            if(digit == X){
                  count++;
              }
              temp /=10;
          }
      }
       return count;
    }
};
