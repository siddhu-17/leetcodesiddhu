class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0;
         int sample =x;
         if(x<0){
            return false;
         }

        while(x){

            int rem  = x%10;
            ans = (ans*10)+rem;
            x =x/10;
        }
      

        if(sample == ans){
            return true;
        }
        return false;
    }
};