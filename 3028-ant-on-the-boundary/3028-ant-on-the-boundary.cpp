class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        vector<int>prefix_sum(nums.size());
        prefix_sum[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            prefix_sum[i] = prefix_sum[i-1] + nums[i];
        }
        int ans=0;
        for(int i =0;i<nums.size();i++){
            if(prefix_sum[i]==0){
                ans++;
            }
        }
        return ans;
    }
};