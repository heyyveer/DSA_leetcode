class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end(), greater<char>());
        int max1 = s[0] - '0';
        int max2 = s[1] - '0';
        return max1*max2;
    }
};