class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < s.size(); right++) {
            // Add arr[right] to window
            while (charset.find(s[right]) !=charset.end()) {
                // Remove arr[left] from window
                charset.erase(s[left]);
                left++;
            }
            // Window is valid
            charset.insert(s[right]);
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};