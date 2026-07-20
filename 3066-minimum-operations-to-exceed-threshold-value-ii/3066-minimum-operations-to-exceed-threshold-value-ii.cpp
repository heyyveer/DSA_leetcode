class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int x : nums) {
            pq.push(x);
        }
        int count = 0;
        while (pq.size() >= 2) {
            if (pq.top() >= k)
                return count;
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            long long c = min(a, b) * 2LL + max(a, b);
            pq.push(c);
            count++;
        }
        if (!pq.empty() && pq.top() >= k)
            return count;
        return -1;
    }
};