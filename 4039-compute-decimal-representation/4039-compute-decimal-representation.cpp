class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        long count=1;
        while(n){

          long rem = n%10;
          if(rem!=0){
            int val = rem*count;
            
            ans.push_back(val);
          }
          count=count*10;
          n=n/10;
    
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};