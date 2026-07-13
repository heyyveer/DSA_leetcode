class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,j=0,n=nums.size(),ans=INT_MIN,sum=0;
        while(j<n){
            sum+=nums[j];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
            j++;
        }
        return ans;
    }
};