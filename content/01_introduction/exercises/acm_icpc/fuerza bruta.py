"""
    @author: Daniel Diaz
"""

def solve(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            for k in range(j+1, len(nums)):
                if (nums[i] + nums[j] + nums[k] == target):
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