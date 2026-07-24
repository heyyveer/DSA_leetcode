class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return 1;

        unordered_set<int> pairXor;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                pairXor.insert(nums[i] ^ nums[j]);
            }
        }
        bitset<2048> triplets;
        for (int x : pairXor) {
            for (int num : nums) {
                triplets.set(x ^ num);
            }
        }
        for (int num : nums) {
            triplets.set(num);
        }
        return triplets.count();
    }
};