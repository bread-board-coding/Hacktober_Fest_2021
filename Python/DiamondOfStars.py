n=int(input()) 
for i in range(1,n+1):
    for j in range(1,n-i+1):
        print(' ',end='')
    for j in range(1,i+1):
        print('*',end='') 
    for j in range(2,i+1):
        print('*',end='')
    print()
for i in range(1,n):
    for j in range(1,i+1): 
        print(' ',end='')
    for j in range(1,n-i+1):
        print('*',end='') 
    for j in range(2,n-i+1):
        print('*',end='')
    print()
