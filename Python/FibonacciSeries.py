print("Enter the number of terms:")
n=int(input())
a=0
b=1
for i in range(n+1):
  c=a+b
  a=b
  b=c
  print(c,end=" ")
