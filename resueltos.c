#include<stdio.h>

float sum_elements(float[],unsigned);

int main(){
    // Prueba de sum_elements
    // Inicializando lista[]
    // La variable acumulado recibira lo retornado por la funcion
    // Luego se impprime el resultado
    float lista[5] = {10.2, 10.2, 10.2, 10.2, 10.2};
    float acumulado = sum_elements(lista, 0);
    printf("%f\n",acumulado);
}

/*
 * sum_elements devuelve la suma de los elementos del array a.
 */
float sum_elements(float a[], unsigned length){
    int i;
    float result = 0;

    // Codigo con error
    /*
    for (i = 0; i <= length-1; i++){
        result += a[i];
    }
    */

    // Codigo corregido
    for (i = 0; i < length; i++){
        result += a[i];
    }
    
    return result;    
}