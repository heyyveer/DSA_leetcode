class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = 0 , n = nums.size() , sum = 0 , ans = INT_MIN;
        while(l<n){
            sum+=nums[l];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
            l++;

        }
        return ans;
    }
};