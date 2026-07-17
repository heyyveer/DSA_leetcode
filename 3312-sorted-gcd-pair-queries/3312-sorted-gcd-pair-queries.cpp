class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1);

        for (int x : nums)
            freq[x]++;

        vector<long long> exact(mx + 1);

        for (int g = mx; g >= 1; g--) {
            long long cnt = 0;

            for (int j = g; j <= mx; j += g) {
                cnt += freq[j];
                exact[g] -= exact[j];
            }

            exact[g] += cnt * (cnt - 1) / 2;
        }

        for (int i = 2; i <= mx; i++)
            exact[i] += exact[i - 1];

        vector<int> ans;

        for (long long q : queries) {
            ans.push_back(
                upper_bound(exact.begin(), exact.end(), q) - exact.begin()
            );
        }

        return ans;
    }
};