"""
    @author: Daniel Diaz
"""

def twoSum(nums, target, end):
    visited = set()
    for i in range(end):
        if target - nums[i] in visited:
            return True
        visited.add(nums[i])
    return False
 
def solve(nums, target):
    for i in range(len(nums)):
        if twoSum(nums, target - nums[i], i):
            return True
    return False
 
                        
nums = [int(num) for num in input().split()]
 
sumOfNums = sum(nums)
if (sumOfNums % 2 == 1):
    print("No")
else:
    target = sumOfNums // 2
    if solve(nums, target):
        print("YES")
    else:
        print("NO")