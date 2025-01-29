import tkinter as tk
from tkinter.simpledialog import askinteger
from tkinter import *
from tkinter import messagebox


app = Tk() #создание окна
app.title("Приветствие!") #название окна
app.geometry('500x500') #размер окна

# def hello_call_back():
#    msg = messagebox.showinfo( "Привет Питон", "Hello World")

fr = Frame(
    app,
    padx = 10,
    pady = 10
)


message = Label(
    fr,
    text = "Привет!"
)
message.grid(row=3, column=1)

knopka1 = Button(
    fr,
    text="Hello!",
    command = print("Hello world!")
)
knopka1.place(x=250, y=250)

fr.pack()
message.pack()
app.mainloop()

