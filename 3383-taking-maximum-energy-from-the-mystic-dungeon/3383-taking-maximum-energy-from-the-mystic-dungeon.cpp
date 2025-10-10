class Solution {
public:

int f(int ind,int k,int n,vector<int>& energy,vector<int>& dp){
    if(ind >=n){
        return 0;
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
       

     return dp[ind] =  energy[ind] + f(ind+k,k,n,energy,dp);
    
       

      

}
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
          int maxi =INT_MIN;
          vector<int>dp(n+1,-1);

        for(int i=0;i<n;i++){
            maxi = max(maxi, f(i,k,n,energy,dp));
        }
        

        return maxi;
    }
};