class Solution {
public:
    bool backspaceCompare(string s, string t) {

        int n = s.size();
        int m = t.size();

        int addedS = 0;
        int addedT = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] != '#') {
                s.push_back(s[i]);
                addedS++;
            } else if (addedS > 0) {
                s.pop_back();
                addedS--;
            }
        }

        for (int i = 0; i < m; i++) {
            if (t[i] != '#') {
                t.push_back(t[i]);
                addedT++;
            } else if (addedT > 0) {
                t.pop_back();
                addedT--;
            }
        }

        if (addedS != addedT)
            return false;

        for (int i = 0; i < addedS; i++) {
            if (s[n + i] != t[m + i])
                return false;
        }

        return true;
    }
};