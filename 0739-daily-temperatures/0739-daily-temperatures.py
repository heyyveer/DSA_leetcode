class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        ans = [0]*len(temperatures)
        for i  , val in enumerate(temperatures):
            while stack and temperatures[stack[-1]]<val:
                prev = stack.pop()
                ans[prev]=i-prev
            stack.append(i)
        return ans
        
