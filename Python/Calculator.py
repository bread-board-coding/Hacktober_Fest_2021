from tkinter import*
cal=Tk()
cal.geometry("410x460")
cal.title("CALCULATOR")
cal.title("CALCULATOR")
callabel = Label(cal,text="CALCULATOR",bg='white',font=("Times",20,'bold'))
callabel.pack(side=TOP)
cal.config(background='light blue')
textin=StringVar()
operator=""

def clickbut(number):   #lambda:clickbut(1)
     global operator
     operator=operator+str(number)
     textin.set(operator)

def equlbut():
     global operator
     addition=str(eval(operator))
     textin.set(addition)
     operator=''
def equlbut():
     global operator
     substraction=str(eval(operator))
     textin.set(substraction)
     operator=''     
def equlbut():
     global operator
     multiplication=str(eval(operator))
     textin.set(multiplication)
     operator=''
def equlbut():
     global operator
     division=str(eval(operator))
     textin.set(division)
     operator=''    

def clrbut():
     textin.set('')
     
caltext=Entry(cal,font=("Calibri (Body)",12,'bold'),textvar=textin,width=25,bd=5,bg='light gray')
caltext.pack()

but1=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(1),text="1",font=("Calibri (Body)",16,'bold'))
but1.place(x=10,y=100)

but2=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(2),text="2",font=("Calibri (Body)",16,'bold'))
but2.place(x=10,y=170)

but3=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(3),text="3",font=("Calibri (Body)",16,'bold'))
but3.place(x=10,y=240)

but4=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(4),text="4",font=("Calibri (Body)",16,'bold'))
but4.place(x=75,y=100)

but5=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(5),text="5",font=("Calibri (Body)",16,'bold'))
but5.place(x=75,y=170)

but6=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(6),text="6",font=("Calibri (Body)",16,'bold'))
but6.place(x=75,y=240)

but7=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(7),text="7",font=("Calibri (Body)",16,'bold'))
but7.place(x=140,y=100)

but8=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(8),text="8",font=("Calibri (Body)",16,'bold'))
but8.place(x=140,y=170)

but9=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(9),text="9",font=("Calibri (Body)",16,'bold'))
but9.place(x=140,y=240)

but0=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',command=lambda:clickbut(0),text="0",font=("Calibri (Body)",16,'bold'))
but0.place(x=10,y=310)

butdot=Button(cal,padx=47,pady=14,bd=4,bg='light yellow',command=lambda:clickbut("."),text=".",font=("Calibri (Body)",16,'bold'))
butdot.place(x=75,y=310)

butpl=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',text="+",command=lambda:clickbut("+"),font=("Calibri (Body)",16,'bold'))
butpl.place(x=205,y=100)

butsub=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',text="-",command=lambda:clickbut("-"),font=("Calibri (Body)",16,'bold'))
butsub.place(x=205,y=170)

butml=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',text="*",command=lambda:clickbut("*"),font=("Calibri (Body)",16,'bold'))
butml.place(x=205,y=240)

butdiv=Button(cal,padx=14,pady=14,bd=4,bg='light yellow',text="/",command=lambda:clickbut("/"),font=("Calibri (Body)",16,'bold'))
butdiv.place(x=205,y=310)

butclear=Button(cal,padx=14,pady=119,bd=4,bg='light yellow',text="CE",command=clrbut,font=("Calibri (Body)",16,'bold'))
butclear.place(x=270,y=100)

butequal=Button(cal,padx=151,pady=14,bd=4,bg='light yellow',command=equlbut,text="=",font=("Calibri (Body)",16,'bold'))
butequal.place(x=10,y=380)
cal.mainloop()
