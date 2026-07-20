class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int ch : stones){
            pq.push(ch);
        }

        while(pq.size()>=2){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(a==b){
                continue;
            }
            else{
                pq.push(a-b);
            }
        }
        if(pq.empty()){
            return 0;
        }
        return pq.top();
    }
};