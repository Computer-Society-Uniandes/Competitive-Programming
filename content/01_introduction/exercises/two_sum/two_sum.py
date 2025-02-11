def twoSum(array, target):
    memo = {}
    for i in range(len(array)):
        number = array[i]
        complement = target - number
        if complement in memo:
            return memo[complement], i
        memo[number] = i
    return -1

array = [7, 2, 12, 15, 9, 5]
target = 11
print(twoSum(array, target))