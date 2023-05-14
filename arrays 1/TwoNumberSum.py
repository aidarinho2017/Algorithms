def twoNumberSum(array, targetSum):
    array.sort()
    start = 0
    end = len(array) - 1
    while start < end:
        if array[start] + array[end]==targetSum:
            return [array[start], array[end]]
        elif array[start] + array[end] < targetSum:
            start += 1
        elif array[start] + array[end] > targetSum:
            end -= 1
    return []
print(twoNumberSum([1, 2, 3, 4, 5], 9))
print(twoNumberSum([3, 4, 5, 1, 2, 3], 4))