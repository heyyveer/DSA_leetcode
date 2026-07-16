class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int start=-1;
        int left=0;
        int right=nums.size();
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]<target){
                left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid;
            }
            else{
                start=mid;
                right=mid;
            }
        }
        ans[0]=start;
        int last=-1;
        left=0;
        right=nums.size();
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]<target){
                left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid;
            }
            else{
                last=mid;
                left=mid+1;
            }
        }
        ans[1]=last;
        return ans;
    }
};