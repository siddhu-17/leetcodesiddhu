class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back({nums[i],i});
        }

        sort(ans.begin(),ans.end());
        int left =0,right = ans.size()-1;
        while(left<right){
            int val = ans[left].first + ans[right].first;
            if(val == target){
                return {ans[left].second , ans[right].second};
            }
            if(val<target){
                left++;
            }else{
                right--;
            }
        }
        return {-1,-1};
    }
};