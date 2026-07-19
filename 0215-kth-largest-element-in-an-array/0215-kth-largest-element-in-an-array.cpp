class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int ch : arr){
            pq.push(ch);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};