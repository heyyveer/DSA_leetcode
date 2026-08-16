class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans = -1 , k = INT_MAX;
        for(int i =0;i<drones.size();i++){
            int d = abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(d<=drones[i][2]){
                if(d<k){
                    k=d;
                    ans=i;
                }
            }
        }
        return ans;
    }
};