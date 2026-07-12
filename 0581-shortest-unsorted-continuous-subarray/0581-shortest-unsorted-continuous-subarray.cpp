class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxval=nums[0];
        int minval=nums[n-1];
        int left=-2,right=-1;
        for(int i=0;i<nums.size();i++){
            maxval=max(maxval,nums[i]);
            if(nums[i]<maxval){
                left=i;
            }
        }
        for(int j=n-2;j>=0;j--){
            minval=min(minval,nums[j]);
            if(nums[j]>minval){
                right=j;
            }
        }
        return left-right+1;
    }
};