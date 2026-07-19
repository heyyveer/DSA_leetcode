class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int ch : stones){
            pq.push(ch);
        }
        while(pq.size()>=2){
            int x =pq.top();
            pq.pop();
            int y =pq.top();
            pq.pop();
            if(x==y){
                continue;
            }
            else{
                pq.push(x-y);
            }
        }
        if(pq.empty()){
            return 0;
        }
        else{
            return pq.top();
        }
    }
};