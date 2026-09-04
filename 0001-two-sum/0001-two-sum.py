class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i , x in enumerate(nums):
            remain = target - x
            if remain in seen:
                return [seen[remain],i]
            seen[x]=i