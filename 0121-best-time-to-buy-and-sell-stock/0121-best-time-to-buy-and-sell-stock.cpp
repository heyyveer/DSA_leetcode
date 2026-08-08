class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a  = 0 , b = 1, n = prices.size() , ans = 0;
        while(b<n){
            if(prices[a]<prices[b]){
                ans =  max(ans,prices[b]-prices[a]);
            }
            else{
                a=b;
            }
            b++;
        }
        return ans;
    }
};