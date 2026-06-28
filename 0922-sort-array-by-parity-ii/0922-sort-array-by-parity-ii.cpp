class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int slow=0;
        int fast=1;

        while (slow < nums.size() && fast < nums.size()){
            if(nums[slow]%2==0){
                slow+=2;
            }
            else if(nums[fast]%2!=0){
                fast+=2;
            }
            else{
                swap(nums[slow],nums[fast]);
                slow+=2;
                fast+=2;
            }
        }
        return nums;
    }
};