def nonConstructibleChange(coins):
    coins.sort()
    cur = 0
    for i in coins:
        if i > cur + 1:
            return cur+1
        cur+=i
    return cur+1
print(nonConstructibleChange([1, 2, 3, 5, 7, 9]))