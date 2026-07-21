class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        int i=0;
        for(int ch : arr){
            int a = abs(ch-x);
            pq.push({a,i++});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(arr[pq.top().second]);
            cout<<pq.top().first<<"--"<<pq.top().second<<endl;;
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};