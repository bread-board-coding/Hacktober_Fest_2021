print("Enter your number:")
n=int(input())
count=0
while(n!=0):
  n=n//10
  count=count+1
print("Number of digits are:",count)
