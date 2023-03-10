/* "Laboratorio 4"
Author: Rosa Esmeralda Flores Harrison
date: 10-03-2023
Description: Descripción de los tipos de datos en python
Param: [nombre] [tipo]
version: 2.00
name:resultado
return: valor entero

Name: Suma
Author: Rosa Esmeralda Flores Harrison
Date: 10-03-2023
Description: Imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
Param:def

Name: Resta 
Author: Rosa Esmeralda Flores Harrison
Date: 10-03-2023
Description:Imprima la resta  de dos numeros dados solo si son multiplos de 5, de lo contrario imprimira en pantalla que no son impares"
Param: void

Name: Division
Author: Rosa Esmeralda Flores Harrison
Date: 10-03-2023
Description:Imprima la division  de dos numeros dados solo si su division no tiene residuo, de lo contrario imprimira en pantalla que no es una division exacta"
Param: void

Name: Multiplicacion
Author: Rosa Esmeralda Flores Harrison
Date: 10-03-2023
Description:Imprima la multiplicacion  de dos numeros dados solo si son mayores a 10, de lo contrario imprimira en pantalla que los valores dados no son mayores a 10"
Param: void
*/


#include <stdio.h>
#include <stdlib.h>

int printMenu(){
    int option;
    system("clear");
    fflush(stdin);
    printf("Bienvenido al menú, seleccione una opción\n\n");
    printf("\t1) Suma de dos valores pares\n");
    printf("\t2) Resta de dos valores múltiplos de 5\n");
    printf("\t3) División de dos valores sin residuo\n");
    printf("\t4) Multiplicación de dos valores mayores a 10\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

void suma(int a, int b){
    if(a%2==0 && b%2==0){
        printf("\nLa suma de %d y %d es %d\n",a,b,a+b);
    }else{
        printf("\n%d y %d no son pares\n",a,b);
    }
}

void resta(int a, int b){
    if(a%5==0 && b%5==0){
        printf("\nLa resta de %d y %d es %d\n",a,b,a-b);
    }else{
        printf("\n%d y %d no son múltiplos de 5\n",a,b);
    }
}

void division(int a, int b){
    if(a%b==0){
        printf("\nLa división de %d entre %d es %d\n",a,b,a/b);
    }else{
        printf("\n%d no es divisible entre %d\n",a,b);
    }
}

void multiplicacion(int a, int b){
    if(a>10 && b>10){
        printf("\nLa multiplicación de %d y %d es %d\n",a,b,a*b);
    }else{
        printf("\n%d y %d no son mayores a 10\n",a,b);
    }
}

int main(){
    char inutil;
    int flag = 0;
    while(flag!=4){
        flag = printMenu();
        switch (flag){
            case 1:{
                int a,b;
                printf("\nIngrese dos números pares separados por un espacio: ");
                scanf("%d %d",&a,&b);
                suma(a,b);
                break;
            }
            
            case 2:{
                int a,b;
                printf("\nIngrese dos números múltiplos de 5 separados por un espacio: ");
                scanf("%d %d",&a,&b);
                resta(a,b);
                break;
            }
            
            case 3:{
                int a,b;
                printf("\nIngrese dos números para dividir separados por un espacio: ");
                scanf("%d %d",&a,&b);
                division(a,b);
                break;
            }
            
            case 4:{
                int a,b;
                printf("\nIngrese dos números mayores a 10 separados por un espacio: ");
                scanf("%d %d",&a,&b);
                multiplicacion(a,b);
                break;
            }
            
            case 0:
                printf("\nNo válido");
                break;
                
            default:
                printf("\nOpción no válida");
                break;
        }
        printf("\nPresione una tecla para continuar...");
        scanf("%c",&inutil);

        // Preguntar al usuario si desea volver al menú principal o salir del programa
        printf("\nDesea volver al menú principal? (s/n): ");
        scanf(" %c", &inutil);
       
    } while (inutil == 's' || inutil == 'S');
    return 0;
}
/*
---------------------INSTRUCCIONES-----------------------
explique: 
      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
         R= El código contiene un comentario que describe la función "printMenu". En el comentario se incluye el 
         nombre del autor, la fecha de creación y una descripción de los tipos de datos en Python. También se 
         incluye información sobre los parámetros de entrada de la función. 
         
      2. ¿Para qué sirve la función fflush?
         R=La función "fflush" se utiliza para limpiar el búfer de entrada o salida de un archivo o de una corriente 
         de entrada/salida. En el código dado, se utiliza para limpiar el búfer de entrada después de la lectura de 
         la entrada del usuario, para evitar que se lean datos no deseados o que se produzcan errores en la lectura.
         
      3. ¿Cuál es la sintaxis de un while?
         R= while (condicion){
             //código a ejecutar mientras la condición sea verdadera
            }
         
         El código dentro del while se ejecuta mientras la condición sea verdadera. Si la condición se evalúa como falsa,
         el ciclo se detiene y la ejecución continúa con la primera línea después del while.
         
      4. ¿Cuál es la sintaxis de un switch?
         R= switch (expresión){
               case valor1:
                  //código a ejecutar si expresión es igual a valor1
                  break;
               case valor2:
                  //código a ejecutar si expresión es igual a valor2
                  break;
                
               //y así sucesivamente
               default:
                     
               //código a ejecutar si no se cumple ningún caso anterior
               break;
            }
*/
