def isMonotonic(array):
    Dec = True
    Inc = True
    for i in range(1, len(array)):
        if array[i] < array[i-1]:
            Inc = False
        elif array[i] > array[i-1]:
            Dec = False
    return Dec or Inc