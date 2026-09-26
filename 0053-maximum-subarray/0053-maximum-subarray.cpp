class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a =0,b=0,n=nums.size(),ans=INT_MIN,sum=0;;
        while(b<n){
            sum+=nums[b];
            ans=max(ans,sum);
            if(sum<0) sum=0;
            b++;
        }
        return ans;
    }
};