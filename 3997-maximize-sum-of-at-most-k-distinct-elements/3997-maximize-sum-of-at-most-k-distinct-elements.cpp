class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
     
        for(int i=nums.size()-1;i>=0;i--){
          
            if(ans.empty()|| ans.back()!=nums[i]){
                  k--;
                ans.push_back(nums[i]);
             
            }
            if(k==0){
                break;
            }
        }
        return ans;
       
    }
};