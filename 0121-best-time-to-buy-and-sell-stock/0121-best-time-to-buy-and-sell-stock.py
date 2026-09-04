class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        a = 0
        b = 1
        n = len(prices)
        ans = 0
        while(b<n):
            if prices[a]<prices[b]:
                ans = max(ans,prices[b]-prices[a])
            else:
                a=b
            b+=1
        return ans
