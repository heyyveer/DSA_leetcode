class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int a = nums[n]-1;
        int b = nums[n-1]-1;
        return a*b;
    }
};