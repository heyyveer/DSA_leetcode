class Solution {
public:
    bool canFinish(vector<int>& piles, int speed, int h) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + speed - 1) / speed;
            if (hours > h)
                return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=INT_MIN;
        for(int i=0;i<piles.size();i++){
            ans=max(ans,piles[i]);
        }
        int left=1;
        int right=ans;
        while(left<right){
            int mid=left+(right-left)/2;
            if(canFinish(piles,mid,h)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};