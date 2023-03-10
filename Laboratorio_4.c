/* Laboratorio4
Author: Curso Programación 2023 
date: 7-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
*/

//---------------------INSTRUCCIONES-----------------------
//Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
//Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
//Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
//Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10

#include <stdio.h>
#include <stdlib.h>
int multiplicacion(int g, int h)
	/* multiplicacion
    Author: Ortiz Bravo Oscar
    Date: 10 de marzo 2023
    Description: imprime la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
    [Param: [g] [int] ]
    [Param: [h] [int] ]
    */

        {
        if (h>10 && g>10){
                printf("%d X %d es = %d",g,h, g*h);
        }
        else {
                printf("No son mayores a 10");
        }
        }
int division (int e, int f){
	/* divison
    Author: Ortiz Bravo Oscar
    Date: 10 de marzo 2023
    Description: imprime la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
    [Param: [e] [int] ]
    [Param: [f] [int] ]
    */

        {
        if (e % f==0 ){
                printf("%d / %d es : %d",e,f, e/f);
        }
        else {
                printf("No es una division exacta");
        }
        }
}

int suma(int a, int b)
        /* suma
    Author: Ortiz Bravo Oscar
    Date: 10 de marzo 2023
    Description: imprime la suma de dos valores solo si son pares, de lo contrario imprimirà que no son pares
    [Param: [a] [int] ]
    [Param: [b] [int] ]
    */

        {
        if (a % 2==0 && b % 2==0){
                printf("%d + %d es : %d",a,b, a+b);
        }
        else {
                printf("No son pares");
        }
        }
int resta (int c, int d)
        /* resta
    Author: Ortiz Bravo Oscar
    Date: 10 de marzo 2023
    Description: imprime la resta de dos valores solo si son mùltiplos de 5, de lo contrario imprimirà que no son impares
    [Param: [c] [int] ]
    [Param: [d] [int] ]
    */

        {
        if (c % 5==0 && d % 5==0){
                printf("%d - %d es : %d",c,d, c-d);
                                }
        else {
                printf("No son impares");
                }
                                        }

int printMenu(){
    /* printMenu
    Author: Ortiz Bravo Oscar
    Date: 10 de marzo 2023
    Description: imprime y guarda la opcion que desea ingresar el usuario
    [Param: [option] [int] ]
    */
    int option;
    system("cls");
    fflush( stdin );
    printf("Bienvenido al men%c seleccione una opci%cn \n\n",163,162);
    printf("\t1)Opcion1\n"); printf("\t2)Opcion2\n"); printf("\t3)Opcion3\n"); printf("\t4)Opcion4\n"); printf("\t5)Salir\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

int main(){
    char inutil;
    int flag = 0;
    while(flag!=5){
        flag = printMenu();
        switch (flag){
            case 1:
                printf("\n Suma 1\n");
                suma (7,8);
                break;

            case 2:
                printf("\n Resta 2\n");
                resta (7,5);
                break;

            case 3:
                printf("\n Division 3\n");
                division(48,7);
                break;

            case 4:
                printf("\n Multiplicacion 4\n");
                multiplicacion(23,40);
                break;
                
            case 5:
                printf("\n Decidiste salir\n");
                break;
            default:
                printf("\nNo valido");
                break;
        }
        printf("\nOprima enter tecla cualquiera para continuar \n");
        fflush( stdin );
        scanf("%c",&inutil);
    }
    printf("excelente");
}


//---------------------INSTRUCCIONES-----------------------
//explique: 
//      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
//              Lo que hace es imprimir un menú con cuatro opciones vacías mediante un while, cada que acaba la funcion se borra la pantalla y se borra la entrada.
//      2. ¿Para qué sirve la función fflush?
//              Para borrar la entrada que da el usuario, vacía el bufer
//      3. ¿Cuál es la sintaxis de un while?
//              while (condición){
//              } 
//      4. ¿Cuál es la sintaxis de un switch?
//              switch (variable){
//              case _:
//              break;
//              case _:
//              break;
//              default;
//              break;
//              }
//Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
//Guarde y suba su código a un repositorio.
