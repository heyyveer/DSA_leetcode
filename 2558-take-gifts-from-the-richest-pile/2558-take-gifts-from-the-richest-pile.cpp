class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        int count=0;
        while(count<k){
            int gift=pq.top();
            pq.pop();
            int a = floor(sqrt(gift));
            pq.push(a);
            count++;
        }
        long long sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};