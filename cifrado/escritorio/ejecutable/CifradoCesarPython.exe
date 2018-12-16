from caesar import Caesar   # Cifrado Cesar
from tkinter import *
 
class GUI(Tk):
    def __init__(self):
        Tk.__init__(self)
        self.title("Cifrado Caesar Python")
 
        self.i = IntVar()
        self.s = StringVar()
 
        Label(self, text="Mensaje: ", bg="black", fg="white").grid(row=1, column=0)
        self.cadena = Entry(self, textvariable=self.s, width=30)
        self.cadena.grid(row=1, column=1)
 
        Label(self, text="Desplazamiento: ", bg="black", fg="white").grid(row=0, column=0)
        self.clave = Entry(self, width=20)
        self.clave.grid(row=0, column=1)
 
        self.rc = Radiobutton(self, text="Cifrar", variable=self.i, value=1, command=self.toCaesar, bg="black", fg="white")
        self.rc.grid(row=2, column=0)
 
        self.rd = Radiobutton(self, text="Descifrar", variable=self.i, value=2, command=self.toCaesar, bg="black", fg="white")
        self.rd.grid(row=2, column=1)
 
        Label(self, text="Resultado:", bg="black", fg="red", relief=RIDGE).grid(row=3, column=0, columnspan=2)

        Label(self, text="Mensaje por transposicion inversa:", fg="black").grid(row=0, column=512)
        self.cadena = Entry(self, textvariable=self.s, width=30)
        self.cadena.grid(row=0, column=513)

        Label(self, text="Transpocicion inversa por grupos", fg="black").grid(row=3, column=512)

        Label(self, text="Por grupos de: ", fg="black").grid(row=4, column=512)
        self.clave = Entry(self, width=20)
        self.clave.grid(row=4, column=513)

    def toCaesar(self):
        if self.i.get() == 1:
            cadena = self.cadena.get().upper()
            clv = int(self.clave.get())
            r = Caesar()
            a = r.cifrar(cadena, clv)
 
            Label(self, text=a, bg="black", fg="white", relief=RIDGE).grid(row=4, column=0, columnspan=2, sticky=NSEW)
 
        elif self.i.get() == 2:
            cadena = self.cadena.get().upper()
            clv = int(self.clave.get())
            r = Caesar()
            a = r.descifrar(cadena, clv)
 
            Label(self, text=a, bg="black", fg="white", relief=RIDGE).grid(row=4, column=0, columnspan=2, sticky=NSEW)
 
GUI().mainloop()