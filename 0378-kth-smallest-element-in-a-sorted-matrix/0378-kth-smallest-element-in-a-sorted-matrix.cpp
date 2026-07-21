class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        priority_queue<int> pq;
        int r = mat.size();
        int c = mat[0].size();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                pq.push(mat[i][j]);
                if (pq.size() > k) {
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
};