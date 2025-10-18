class Solution {
public:
    int reverse(int n) {
      long long ans =0;

        while(n){
            int rem = n%10;
            ans =(ans*10)+rem;
            
            n=n/10;

        }

        if(ans >=INT_MAX || ans<=INT_MIN){
                return 0;
            }else{
                return (int)ans;
            }

return ans;
    }
};