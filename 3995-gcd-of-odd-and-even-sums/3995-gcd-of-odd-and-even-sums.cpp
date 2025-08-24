class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int countodd=0,counteven=0;
         int sum1=0,sum2=0;
        for(int i=1;i<=INT_MAX;i++){
            if((i%2)==0){
                counteven++;
                sum1+=i;
            }else{
                countodd++;
                sum2+=i;
            }
            if(counteven ==n && counteven == n){
                break;
            }
        }

        return  __gcd(sum1,sum2);
    }
};