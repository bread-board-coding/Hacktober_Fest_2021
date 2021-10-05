from tkinter import *
screen=Tk()
screen.title("Rupin's Calculator")
screen.geometry('450x500')

tex= StringVar()
operator = ''

entry1=Entry(screen,bg='yellow',font=('arial',26,'bold'),bd=30,justify='right',textvariable=tex)
entry1.grid(row=0,columnspan=4)
screen.iconbitmap('Hopstarter-Soft-Scraps-Calculator.ico')




def click(number):
    global operator
    operator+=str(number)
    tex.set(operator)

def clear():
    global operator 
    operator = ''
    tex.set(operator)

def equal():
    global operator
    result= eval(operator)
    operator=str(result)
    tex.set(result)




btn7=Button(screen,text='7',font=('arial',26,'bold'),bd=12,command=lambda:click(7))
btn7.grid(row=1,column=0)

btn8=Button(screen,text='8',font=('arial',26,'bold'),bd=12,command=lambda:click(8))
btn8.grid(row=1,column=1)

btn9=Button(screen,text='9',font=('arial',26,'bold'),bd=12,command=lambda:click(9))
btn9.grid(row=1,column=2)

btnpl=Button(screen,text='+',font=('arial',26,'bold'),bd=12,command=lambda:click('+'))
btnpl.grid(row=1,column=3)

btn4=Button(screen,text='4',font=('arial',26,'bold'),bd=12,command=lambda:click(4))
btn4.grid(row=2,column=0)

btn5=Button(screen,text='5',font=('arial',26,'bold'),bd=12,command=lambda:click(5))
btn5.grid(row=2,column=1)

btn6=Button(screen,text='6',font=('arial',26,'bold'),bd=12,command=lambda:click(6))
btn6.grid(row=2,column=2)

btnmi=Button(screen,text='-',font=('arial',26,'bold'),bd=12,command=lambda:click('-'))
btnmi.grid(row=2,column=3)

btn1=Button(screen,text='1',font=('arial',26,'bold'),bd=12,command=lambda:click(1))
btn1.grid(row=3,column=0)

btn2=Button(screen,text='2',font=('arial',26,'bold'),bd=12,command=lambda:click(2))
btn2.grid(row=3,column=1)

btn3=Button(screen,text='3',font=('arial',26,'bold'),bd=12,command=lambda:click(3))
btn3.grid(row=3,column=2)

btnml=Button(screen,text='x',font=('arial',26,'bold'),bd=12,command=lambda:click('*'))
btnml.grid(row=3,column=3)

btn0=Button(screen,text='0',font=('arial',26,'bold'),bd=12,command=lambda:click(0))
btn0.grid(row=4,column=0)

btnC=Button(screen,text='C',font=('arial',26,'bold'),bd=12,command=lambda:clear())
btnC.grid(row=4,column=1)

btneq=Button(screen,text='=',font=('arial',26,'bold'),bd=12,command=lambda:equal())
btneq.grid(row=4,column=2)

btndi=Button(screen,text='/',font=('arial',26,'bold'),bd=12,command=lambda:click('/'))
btndi.grid(row=4,column=3)

screen.mainloop()
