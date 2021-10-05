import tkinter
from time import strftime

WIN = tkinter.Tk()
WIN.title('Clock')

def show_time():
    current_time = strftime("%H:%M:%S %p")
    label.config(text=current_time)
    label.after(1000, show_time)


label = tkinter.Label(WIN, font=("DS-Digital Bold", 80), bg='#171010', fg='#E0C097')
label.grid(row=0, column=0)

show_time()

WIN.mainloop()
