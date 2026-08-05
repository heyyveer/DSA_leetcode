class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis){
        vis[node]=1;

        for(int next:adj[node]){
            if(!vis[next]){
                dfs(next,adj,vis);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        vector<vector<int>> adj(n);

        for(int i=0;i<invocations.size();i++){
            adj[invocations[i][0]].push_back(invocations[i][1]);
        }

        vector<int> vis(n,0);

        dfs(k,adj,vis);

        for(int i=0;i<invocations.size();i++){
            int u=invocations[i][0];
            int v=invocations[i][1];

            if(!vis[u] && vis[v]){
                vector<int> ans;
                for(int j=0;j<n;j++){
                    ans.push_back(j);
                }
                return ans;
            }
        }

        vector<int> ans;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans.push_back(i);
            }
        }

        return ans;
    }
};