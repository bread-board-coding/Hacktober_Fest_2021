#prime numbers in  given range
n1= int(input("Enter number 1"))
n2= int(input("Enter number 2"))
for i in range(n1, n2+1):
        for j in range(2, i):
            if i % j == 0:
                break
        else:
            print(i)