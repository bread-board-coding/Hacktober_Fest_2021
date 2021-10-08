import tkinter as tkinter
import random

# toplevel widget of Tk which represents mostly the main window of an application
root = tkinter.Tk()
root.geometry('400x400')
root.title('Roll Dice')

# label to display dice
label = tkinter.Label(root, text='', font=('Helvetica', 260))
label2 = tkinter.Label(root, text='', font=('Helvetica', 30))
# function activated by button
def roll_dice():
    # unicode character strings for dice
    dice = ['\u2680', '\u2681', '\u2682', '\u2683', '\u2684', '\u2685']
    dice2 = {'\u2680':1, '\u2681':2, '\u2682':3, '\u2683':4, '\u2684':5, '\u2685':6}
    a=random.choice(dice)
    label.configure(text=f'{a}')
    # print(f'{random.choice(dice)} {random.choice(dice)}')
    label.pack()
    label2.configure(text=f'you rolled a {dice2[a]}')
    label2.pack()

# button
button = tkinter.Button(root, text='roll dice', foreground='green', command=roll_dice)

# pack a widget in the parent widget
button.pack()

# call the mainloop of Tk
# keeps window open
root.mainloop()
