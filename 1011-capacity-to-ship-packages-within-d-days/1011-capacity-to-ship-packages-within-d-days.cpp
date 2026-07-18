class Solution {
public:
    bool check(vector<int>& weights, int days ,int mid){
        int sum=0;
        int count=1;
        for(int i = 0; i < weights.size(); i++){
            if(sum + weights[i] <= mid){
                sum += weights[i];
            }
            else{
                count++;
                sum = weights[i];
            }
        }
        return count <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(weights,days,mid)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};