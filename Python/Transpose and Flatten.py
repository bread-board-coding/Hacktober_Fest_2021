import numpy as np
m, n = map(int, input().strip().split(' '))
arr = []
for i in range(m):
    arr.append(np.array(list(map(int, input().strip().split(' ')))))
arr = np.array(arr)
print(arr.transpose())
print(arr.flatten())
