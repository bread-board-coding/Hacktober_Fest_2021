from sys import stdin 
def pairSum(arr, size, x) :
    numPairs = 0
    for i in range(size) :
        for j in range((i+1), size) :
            if arr[i] + arr[j] == x :
                numPairs += 1
    return numPairs 
def takeInput() :
    n = int(input())
    if n == 0 :
        return list(), 0
    arr = list(map(int, input().strip().split(" ")))
    return arr, n
t = int(input()) 
while t > 0 :
    arr, n = takeInput()
    x = int(input())
    print(pairSum(arr, n, x)) 
    
    t -= 1
