class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;
        int r=mat.size();
        int c=mat[0].size();
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            pq.push({count,i});
            cout<<pq.top().first<<"--"<<pq.top().second<<endl;
            count=0;
        }
        vector<int>ans;
        int l=0;
        while(!pq.empty()){
            l++;
            ans.push_back(pq.top().second);
            cout<<pq.top().first<<"--"<<pq.top().second<<endl;
            pq.pop();
            if(l>=k){
                break;
            }
        }
        return ans;
    }
};