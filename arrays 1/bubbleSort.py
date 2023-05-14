def bubbleSort(array):
    a = True
    while a == True:
        a = False
        for i in range(len(array)-1):
            if array[i] > array[i+1]:
                array[i], array[i+1] = array[i+1], array[i]
                a = True
    return array
print(bubbleSort([1, 2, 3, 6, 5, 3]))