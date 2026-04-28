class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0) return 0;

        int original=x, rem, reverse;
        while(x>0){
          rem=x%10;
          reverse=rem*10+reverse;
          x/=10;
        }
    return original==reverse;
    }
};
