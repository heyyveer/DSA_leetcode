class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mid=0;
        while(mid<=right){
            if(nums[mid]==0){
                swap(nums[left],nums[mid]);
                left++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[right]);
                right--;
            }
        }
    }
};

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0;
//         int mid = 0;
//         int high = nums.size() - 1;
//         while (mid <= high) {
//             if (nums[mid] == 0) {
//                 swap(nums[low], nums[mid]);
//                 low++;
//                 mid++;
//             }
//             else if (nums[mid] == 1) {
//                 mid++;
//             }
//             else {
//                 swap(nums[mid], nums[high]);
//                 high--;
//             }
//         }
//     }
// };