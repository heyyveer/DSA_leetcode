class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left=0;
        int right=nums.size()-1;
        int ansk=nums.size()-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[ansk--]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[ansk--]=nums[right]*nums[right];
                right--;;
            }
        }  
        return ans;
    }
};