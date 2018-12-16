class Caesar():
    def __init__(self):
        # Lista de caracteres a usar.
        self.caract = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ0123456789"
 
    def cifrar(self, cadena, clv):
        '''
        Función que cifrará nuestro mensaje, a partir de la cadena y clave proporcionada.
        '''
        resultado = ""
        for letra in cadena:
            if letra == " ":
                resultado += " "
            else:
                op = self.caract.find(letra) + clv
                modulada = int(op) % 37
                resultado = resultado + str(self.caract[modulada])
 
        return(resultado)
 
    def descifrar(self, cadena, clv):
        '''
        Función que descifrará nuestro mensaje cifrado, a partir de una clave y cadena proporcionada.
        '''
        resultado = ""
        for letra in cadena:
            if letra == " ":
                resultado += " "
            else:
                op = self.caract.find(letra) - clv
                modulada = int(op) % 37
                resultado = resultado + str(self.caract[modulada])
 
        return(resultado)