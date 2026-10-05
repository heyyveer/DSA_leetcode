class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int ans = INT_MAX;
        int j =0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                ans = min(i-j+1,ans);
                sum-=nums[j];
                j++;
            }
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};