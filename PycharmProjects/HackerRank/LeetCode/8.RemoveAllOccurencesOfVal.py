# class Solution:
#     def removeElement(self, nums: List[int], val: int) -> int:
#         while val in nums:
#             nums.remove(val)
#
#         return len(nums)

## Also need to remove the element in Place ( meaning without using extra space

def removeElement(nums: list[int], val: int) -> int:
        index = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[index] = nums[i]
                index += 1
        return index

nums = list(map(int, input().strip().split()))
val = 1
print(removeElement(nums, val))