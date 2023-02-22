
/*Somos una app de citas que requiere agregar filtros adicionales para el apoyar después del emparejamiento de nuestros usuarios.
Para ello requerimos un programa que permita al usuario evaluar si una persona cumple con ciertas características para que no le vuelvan a romper el corazón.
El usuario debe contestar 10 preguntas y cada una de ellas sumará una cantidad determinada de puntos, al finalizar se desplegará un mensaje para indicarle al 
usuario si el riesgo vale la pena.
Si el resultado final es mayor a 70% se considerará un buen prospecto de lo contrario se alertará al usuario que no cumple con lo que se necesita.*/
/*


Author: <Flores Harrison Rosa Esmralda>

date: <22/02/23>

Description: El usuario debe contestar 10 preguntas y cada una de ellas sumará una cantidad determinada de puntos, al finalizar se desplegará un mensaje para indicarle al usuario si el riesgo vale la pena.

Param: <Int>  

version: <1.00>

name <resultado>

return <número entero>


name <preguntas>

param <int>

Parámetro de 10 valores

return <número entero>


name <compatibilidad>

param <int>

return <número entero

*/
    

#include<stdio.h>
#define PMaximos 10

int  nivel_amor(){
    
    
    int preguntas[10]; 
    int suma=0;
    int resultado;
    
    printf("\nPregunta 1) ¿Comparten intereses similares?\n");scanf("%i",&preguntas[0]);
    
    printf("\nPregunta 2) ¿Ambos están dispuestos a comprometerse y trabajar en la relación?\n");scanf("%i",&preguntas[1]);
    
    printf("\nPregunta 3) ¿Tienen objetivos de vida compatibles?\n");scanf("%i",&preguntas[2]);
    
    printf("\nPregunta 4) ¿Se sienten mutuamente apoyados y valorados?\n");scanf("%i",&preguntas[3]);
    
    printf("\nPregunta 5) ¿Respetan los límites y necesidades del otro?\n");scanf("%i",&preguntas[4]);
    
    printf("\nPregunta 6) ¿Tienen una comunicación efectiva y abierta?\n");scanf("%i",&preguntas[5]);
    
    printf("\nPregunta 7) ¿Se sienten cómodos siendo ellos mismos cerca del otro?\n");scanf("%i",&preguntas[6]);
    
    printf("\nPregunta 8) ¿Comparten valores religiosos o espirituales similares?\n");scanf("%i",&preguntas[7]);
    
    printf("\nPregunta 9) ¿Se sienten atraídos físicamente el uno por el otro?\n");scanf("%i",&preguntas[8]);
    
    printf("\nPregunta 10) ¿Tienen formas similares de expresar amor y afecto?\n");scanf("%i",&preguntas[9]);

   for(int i=0;i<10; i++){
        suma+=preguntas[i];//contador
    }
   
   resultado = suma/ PMaximos * 1;
   
   if (suma > 7){
    printf("El total de puntos obtenidos es %i, es tu media naranja, pero siga conociendolo",suma); 
   }
 
    else {
    printf("El total de puntos obtenidos es menor a 7, le recomiendo que siga buscando a su media naranja");
   }
    
    return resultado;
}

int main(){
    nivel_amor();

    return 0;
}
