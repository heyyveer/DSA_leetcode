class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        vector<string>ans(score.size());
        int rank=1;
        while (!pq.empty()){
            pair<int, int> temp = pq.top();
            int marks = temp.first;
            int idx = temp.second;
            if(rank==1){
                ans[idx]="Gold Medal";
                rank++;
                pq.pop();
            }
            else if(rank==2){
                ans[idx]="Silver Medal";
                rank++;
                pq.pop();
            }
            else if(rank==3){
                ans[idx]="Bronze Medal";
                rank++;
                pq.pop();
            }
            else{
                ans[idx] = to_string(rank);
                rank++;
                pq.pop();
            }
        }
        return ans;
    }
};