'''Laboratorio4
Author: Curso Programación 2023 
date: 7-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
'''

#---------------------INSTRUCCIONES-----------------------
#Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
#Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
#Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
#Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
import os
def multiplicacion (g,h):
    ''' multiplicacion
    Author: Ortiz Bravo Oscar
    Date: 10/03/2023
    Description: Imprime la multiplicación de dos valores solo si son mayores a 10
    [Param: [g] [int] ]
    [Param: [h] [int] ]
    '''
    if (g>10 and h>10 ):
        resultadoMul = g*h
        print(f"{g} X {h} = {resultadoMul}")
    else: 
        print("No son mayores a 10")

def division (e,f):
    ''' division
    Author: Ortiz Bravo Oscar
    Date: 10/03/2023
    Description: Imprime la división de dos valores solo si el resultado no tiene residuo 
    [Param: [e] [int] ]
    [Param: [f] [int] ]
    '''
    if ((e % f)== 0 ):
        resultadoDiv = e/f
        print(f"{e} / {f} = {resultadoDiv}")
    else: 
        print("No es una division exacta")


def resta (c,d):
    ''' resta
    Author: Ortiz Bravo Oscar
    Date: 10/03/2023
    Description: Imprime la resta de dos valores solo si son múltiplos de 5
    [Param: [c] [int] ]
    [Param: [d] [int] ]
    '''
    if((c % 5) == 0 and (d % 5) == 0):
        resultadoRes = c - d
        print(f"{c} - {d} = {resultadoRes}")
    else:
        print("No son impares")


def suma(a,b):
    ''' suma
    Author: Ortiz Bravo Oscar
    Date: 10/03/2023
    Description: Imprima la suma de dos valores solo si son pares
    [Param: [a] [int] ]
    [Param: [b] [int] ]
    '''
    if((a % 2) == 0 and (b % 2) == 0):
        resultadoSum = a + b
        print(f"{a} + {b} = {resultadoSum}")
    else:
        print("Los números no son pares")

def printMenu():
    ''' printMenu
    Author: Curso Programación 2023
    Date: 7-03-2023
    Description: Impresion de menu en Python
    [Param: [option] [int] ]
    '''
    os.system('cls')
    print("Bienvenido al menú seleccione una opciónn \n\n")
    print("\t1)Suma\n")
    print("\t2)Resta\n")
    print("\t3)Division\n")
    print("\t4)Multiplicacion\n")
    print("\t5)Salir\n")
    option = input()
    if option:
        return int(option)
    else:
        return 0


def main():
    flag = 0
    inutil =''
    while flag != 5:
        flag = printMenu()
        
        if flag == 1:
            print("\n1\n")
            suma(4,14)
        elif flag == 2:
            print("\n2")
            resta(15,5)
        elif flag == 3:
            print("\n3")
            division(49,7)
        elif flag == 4:
            print("\n4")
            multiplicacion(12,17)
        elif flag == 5:
            print("\nHasta luego")
        else:
            print("\nOpción inválida")

        print("\nOprima enter o cualquier tecla para continuar ")
        input(inutil)
    print("Excelente")

if __name__ == "__main__":
    main()

#---------------------INSTRUCCIONES-----------------------
#explique: 
#      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
#      El código imprime un menu que muestra cuatro opciones y te permite repetir la acción hasta que decidas salir
#      2. ¿Cuál es la sintaxis de un while?
#      while (condición): y lo que estará dentro del bucle debe de estar con un tabulador dentro del while, además este se puede romper con un "break"
#      3. ¿Exite swhitch en python?
#      No existe como en C, pero se puede implementar mediantes funciones
#      4. ¿Qué es un elif?
#      elif es la misma funcion de un "else if" en c, si la funcion if no se cumple, alguna de las elif lo hará, y si no queda else.
#      5. ¿Qué función de se ejecuta al correr el script?
#      Naturalmente la función main, también se ejecuta siempre la función menú y en caso de seleccionarlas, se ejecutarán suma, resta, multiplicacion o division. 
#Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
#Guarde y suba su código a un repositorio.
