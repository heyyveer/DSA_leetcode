class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0);
        for (char ch : s) {
            freq[ch]++;
        }
        int length = 0;
        bool odd = false;
        for (int count : freq) {
            if (count % 2 == 0) {
                length += count;
            } else {
                length += count - 1;
                odd = true;
            }
        }
        if (odd) {
            length++;
        }
        return length;
    }
};