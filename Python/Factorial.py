def fact(n):
  if(n==1):
    return 1
  else:
    return n*fact(n-1)
print("Enter your number:")
n=int(input())
print("Factorial of the given number is:",fact(n))
