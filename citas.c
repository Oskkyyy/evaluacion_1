/*
date <22-02-2023>
author <Ortiz Bravo Oscar>
version <1.0>
*/

#include <stdio.h>

//name <main>
//param <respuestas> <char>
//return <float>
int main() {
	
   char respuesta;
   float resultado = 0;

   // Pregunta 1
   printf("Pregunta 1: ¿Es de edad similar a la tuya (Dos años menor a dos años mayor)? \n a)Si \t b)No \n ");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 2;
   }
   else if(respuesta == 'b') {
      resultado -= 2;
   }
   
   // Pregunta 2
   printf("Pregunta 2: ¿Coinciden en gustos musicales? \n a)Si \t b)Le disgusta el mio o a mi el suyo\n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 2;
   }
   else if(respuesta == 'b') {
      resultado -= 1;
   }

  // Pregunta 3
   printf("Pregunta 3: ¿Te parece atractivo(a)? \n a)Si \t b)No \n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 2;
   }
   else if(respuesta == 'b') {
      resultado -= 2;
   }

   // Pregunta 4
   printf("Pregunta 4: ¿Te gusta a lo que se dedica? \n a)Si \t b)No \n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 2;
   }
   else if(respuesta == 'b') {
      resultado -= 1;
   }
   // Pregunta 5
   printf("Pregunta 5: ¿Coinciden en genero de peliculas? \n a)Si \t b)Le disgusta el mio o a mi el suyo ?\n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 2;
   }
   else if(respuesta == 'b') {
      resultado -= 1;
   }

   // Pregunta 6
   printf("Pregunta 6: ¿Coinciden en gustos de comida? \n a)Si \t b)Le disgusta el mio o a mi el suyo\n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 2;
   }
   else if(respuesta == 'b') {
      resultado -= 1.5;
   }
   // Pregunta 7
   printf("Pregunta 7: ¿Viven cerca? \n a)Si \t b)No\n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 2;
   }
   else if(respuesta == 'b') {
      resultado -= 2;
   }

   // Pregunta 8
   printf("Pregunta 8: ¿Coinciden en gustos sobre mascotas? \n a)Si \t b)No: ¿?\n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 2;
   }
   else if(respuesta == 'b') {
      resultado -= 1;
   }
   // Pregunta 9
   printf("Pregunta 9: ¿Coinciden sus planes a futuro (Tener hijos, casarse, etc)? \n a)Si \t b)No \n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 3;
   }
   else if(respuesta == 'b') {
      resultado -= 1.5;
   }

   // Pregunta 10
   printf("Pregunta 10: ¿Te gsuta su personalidad? \n a)Si \t b)No \n");
   scanf(" %c", &respuesta);
   if(respuesta == 'a') {
      resultado += 3;
   }
   else if(respuesta == 'b') {
      resultado -= 1.5;
   }
   
   //Función para determinar y mostrar si hacen match o no, o nada
   if (resultado >15.4){
   	printf("Vale la pena el riesgo de conocer a esta persona :) \n");
   }
   else {
   	printf("Lo sentimos, no hacen match ): \n");
   }

   return 0;
}


