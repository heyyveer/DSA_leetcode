class Solution {
public:
    int maximumProduct(vector<int>& s) {
        sort(s.begin(), s.end(), greater<int>());
        int n = s.size();
        return max((s[0]*s[1]*s[2]),(s[n-1]*s[n-2]*s[0]));
    }
};