class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a =0,b=1,ans=0 , n=prices.size();
        while(b<n){
            if(prices[a]<prices[b]){
                ans = max(ans,(prices[b]-prices[a]));
                b++;
            }
            else{
                a=b;
                b++;
            }
        }
        return ans;
    }
};