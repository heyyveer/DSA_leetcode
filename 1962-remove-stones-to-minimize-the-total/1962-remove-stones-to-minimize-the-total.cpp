class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int ch : piles){
            pq.push(ch);
        }
        int count=1;
        while(count<=k){
            int pile=pq.top();
            pq.pop();
            int a =floor(pile/2);
            pq.push(pile-a);
            count++;
        }
        int sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};