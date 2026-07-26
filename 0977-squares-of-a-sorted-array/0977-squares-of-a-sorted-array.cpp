// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         vector<int>ans(nums.size());
//         int i = 0 ;
//         int j = nums.size()-1;
//         while(i<j){
//             // if(abs(nums[i])>abs(nums[j])){
//             //     swap(nums[j],nums[i]);
//             //     j--;
//             if(abs(nums[i])<abs(nums[j])){
//                 nums[j]=nums[j]*nums[j];
//                 j--;
//             }
//             else{
//                 swap(nums[j],nums[i]);
//                 nums[j]=nums[j]*nums[j];
//                 j--;
//             }
//         }
//         nums[0]=nums[0]*nums[0];
//         return nums;
//     }
// };
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left=0;
        int right=nums.size()-1;
        int end=nums.size()-1;
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[end--]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[end--]=nums[right]*nums[right];
                right--;
            }
        }
        return ans;
    }
};