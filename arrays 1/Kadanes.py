def kadanesAlgorithm(array):
    MaxEndingHere = array[0]
    MaxSoFar = MaxEndingHere
    for i in range(1, len(array)):
        MaxEndingHere = max(array[i], MaxEndingHere+array[i])
        MaxSoFar = max(MaxSoFar, MaxEndingHere)
    return MaxSoFar
print(kadanesAlgorithm([1, 2,-7, 3, 4]))