def getPermutations(array):
    a = []
    if len(array) == 1:
        return [array]
    for i in range(len(array)):
        for el in getPermutations(array[:i]+array[i+1:]):
            a.append([array[i]] + el)
    return a
print(getPermutations([4, 2, 3]))