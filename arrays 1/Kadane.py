def maximumSubarraySum(nums):
    n = len(nums)
    maxSum = -1e8
    currSum = 0
    for i in range(n):
        currSum += nums[i]
        if currSum < nums[i]:
            currSum = nums[i]
        if maxSum < currSum:
            maxSum = currSum

    return maxSum

print(maximumSubarraySum([1, 2, -4, 5]))
