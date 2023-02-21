#EVALUACIÓN 1


#include <stdio.h>
#include <string.h>

int main() {
    int total_puntos = 10;
    int puntaje_obtenido = 0;
    char respuesta[100];
    
    printf("¡Bienvenido al cuestionario!\n");
    
    printf("\n1. ¿Se sienten atraídos físicamente el uno por el otro?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n2. ¿Ambos están dispuestos a comprometerse y trabajar en la relación? \n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n3. ¿Tienen objetivos de vida compatibles?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n4. ¿Se sienten mutuamente apoyados y valorados?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n5. ¿Respetan los límites y necesidades del otro?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n6. ¿Tienen una comunicación efectiva y abierta?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n7. ¿Se sienten cómodos siendo ellos mismos cerca del otro?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n8. ¿Comparten valores religiosos o espirituales similares?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n9. ¿Se sienten atraídos físicamente el uno por el otro?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }
    
    printf("\n10. ¿Tienen formas similares de expresar amor y afecto?\n");
    scanf("%s", respuesta);
    if (strcmp(respuesta, "si") == 0) {
        puntaje_obtenido += 1;
    }

 
 
 printf("Puntaje total obtenido: %.0d/%.0d\n",puntaje_obtenido, total_puntos);
    printf("Resultado final: %2d\n", puntaje_obtenido/total_puntos);

    return 0;
}
