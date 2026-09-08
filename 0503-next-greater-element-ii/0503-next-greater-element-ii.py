class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [-1]*n
        # for i in range(n):
        #     for j in range(1,n):
        #         curr = (i+j)%n
        #         if nums[curr]>nums[i]:
        #             ans[i]=nums[curr]
        #             break
        # return ans
        stack = []

        for i in range()