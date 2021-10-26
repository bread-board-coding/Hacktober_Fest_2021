import datetime 

d,m,y=map(int,input("Enter date: ").split())

try:
	s=datetime.date(y,m,d)
	print("Date is valid.")
except ValueError: 
	print("Date is invalid.")
