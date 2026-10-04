class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // nested loop - O(n^2) , O(1)
        for(int i =0;i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
        // sort + two pointer / binary search -O(nlogn) , O(1)
        // hashmap - O(n)
    }
};