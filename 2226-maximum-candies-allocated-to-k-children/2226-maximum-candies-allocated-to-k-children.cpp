class Solution {
public:
    bool check(vector<int>& candies, long long k, int mid){
        long long count = 0;
        for(int i = 0; i < candies.size(); i++){
            count += candies[i] / mid;
            if(count >= k){
                return true;
            }
        }
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int left = 1;
        int right = *max_element(candies.begin(), candies.end());
        int ans = 0;
        while(left <= right){
            int mid = left + (right - left) / 2;

            if(check(candies, k, mid)){
                ans = mid;
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return ans;
    }
};