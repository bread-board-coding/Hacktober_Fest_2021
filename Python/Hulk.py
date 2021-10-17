n = int(input())
for i in range(1, n):
    if i % 2 == 0:
        print("I love that", end=" ")
    else:
        print("I hate that", end=" ")

if n % 2 == 0:
    print("I love it")
else:
    print("I hate it")
