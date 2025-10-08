class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>sample;

        sort(potions.begin(),potions.end());

 
        for(int k=0;k<spells.size();k++){
        int low=0,high=potions.size()-1;

         int ans =potions.size();
          while(low<=high){
            int mid = low+(high-low)/2;
 
           long long val = spells[k];
           val*=potions[mid];
            if((val) >=long(success)){
          ans =mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
          }
                 sample.push_back(potions.size()-ans);
        }
        return sample;
    }
};