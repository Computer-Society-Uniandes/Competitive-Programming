def minAdditionalWalks(n, k, array):
    b = array[:]
    additionalWalks = 0
    
    for i in range(1, n):
        if b[i] + b[i - 1] < k:
            needed = k - (b[i] + b[i - 1])
            b[i] += needed
            additionalWalks += needed
    
    print(additionalWalks)
    print(" ".join(map(str, b)))

n, k = map(int, input().split())
array = list(map(int, input().split()))
minAdditionalWalks(n, k, array)
