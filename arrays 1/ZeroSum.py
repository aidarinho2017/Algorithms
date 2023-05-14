def zeroSumSubarray(nums):
    for i in range(len(nums)+1):
        for j in range(i):
            if sum(nums[j:i])==0:
                return True
    return False