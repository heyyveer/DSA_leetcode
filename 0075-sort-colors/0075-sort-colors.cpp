class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int left=0;
        // int right=nums.size()-1;
        // while(left<right){
        //     if(nums[right]==2){
        //         right--;
        //     }
        //     else if(nums[left]==0){
        //         left++;
        //     }
        //     else if(nums[left]==2 && nums[right]==0){
        //         swap(nums[left],nums[right]);
        //         left++;
        //         right--;
        //     }
        //     else if(nums[right]==1 && nums[left]==0){
        //         left++;
        //     }
        //     else if(nums[right]==1 && nums[left]==2){
        //         swap(nums[left],nums[right]);
        //         right--;
        //     }
        // }
        // return;
        sort(nums.begin(),nums.end());
    }
};