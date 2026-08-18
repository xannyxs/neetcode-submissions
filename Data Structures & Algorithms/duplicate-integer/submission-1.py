class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for i, current_num in enumerate(nums):
            for j in range(i + 1, len(nums)):
                if current_num == nums[j]:
                    return True


      

        return False

         