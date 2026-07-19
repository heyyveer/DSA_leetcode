class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        for(double ch: nums){
            pq.push(ch);
        }
        double total = accumulate(nums.begin(), nums.end(), 0.0);
        double halved=0;
        int ans=0;
        while (halved < total / 2.0){
            double a =pq.top();
            pq.pop();
            double half = a / 2.0;
            halved += half;
            pq.push(half);
            ans++;
        }
        return ans;
    }
};