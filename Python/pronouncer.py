from tkinter import *
def pro():
    a = say.get()
    from win32com.client import Dispatch
    speak = Dispatch("SAPI.SpVoice")
    speak.speak(a)

root = Tk()
root.title("Pronouncer")
root.config(bg="dark grey")
root.geometry("500x400")
root.minsize(400 , 200)
Label(root , text="What do u want me to  say ", fg="black", bg="dark grey" ,font="comicsans 18 bold").grid(pady=10,row=0 ,column=0)
say = StringVar()
sayentry = Entry(root , textvariable= say , relief=SUNKEN)
sayentry.grid(row= 1 , column=0)    
Button(root , text="Start" ,font="bold", bg="grey" , command=pro ).grid( pady=10, row=3 , column=0)
root.mainloop()