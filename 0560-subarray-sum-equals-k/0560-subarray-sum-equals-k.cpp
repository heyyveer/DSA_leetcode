class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefixsum(nums.size(), 0);
        prefixsum[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefixsum[i] = prefixsum[i - 1] + nums[i];
        }
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(prefixsum[i] - k) != mp.end()) {
                ans += mp[prefixsum[i] - k];
            }
            mp[prefixsum[i]]++;
        }
        return ans;
    }
};