/*Construya un programa en lenguaje C que cree una matriz cuyas 
dimensiones sean ingresadas por el usuario, inicialice toda la matriz en ceros y 
luego imprima la matriz con la diagonal principal con valores en 1.*/

#include <stdio.h>

int main()
{
    int filas, columnas;
    
    printf("Ingrese las dimensiones para crear la matriz\n\n");
    printf("Ingrese primero las dimensiones de las filas: ");
    scanf("%d", &filas);
    printf("Ingrese las dimensiones de las columnas: ");
    scanf("%d", &columnas);
    
    int matriz[filas][columnas];
    
    for (int n = 0; n < filas; n++) {
        for (int m = 0; m < columnas; m++) {
            matriz[n][m] = 0; // Asignamos el valor 0 a cada elemento de la matriz
            
            printf("%d ", matriz[n][m]);
        }
        printf("\n");
    }
     printf("\n");

    //no lo logre 
    for (int n = 0; n < filas; n++) {
        matriz[n][n] = 1; 
            
            printf("%d ", matriz[n][n]);
        for (int m = 0; m < columnas; m++) {
            matriz[n][m] = 0; 
            
            printf("%d ", matriz[n][n]);
        }
        printf("\n");
    }
     printf("\n");
    printf("");
    return 0;
}
