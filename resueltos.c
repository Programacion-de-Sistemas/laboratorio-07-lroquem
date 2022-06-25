#include<stdio.h>

float sum_elements(float[],unsigned);
int add_ok(int,int);

int main(){
    // Prueba de sum_elements
    // Inicializando lista[]
    // La variable acumulado recibira lo retornado por la funcion
    // Luego se impprime el resultado
    float lista[5] = {10.2, 10.2, 10.2, 10.2, 10.2};
    float acumulado = sum_elements(lista, 0);
    printf("%f\n",acumulado);

    // Prueba de add_ok
    // Inicializando x e y
    // Se imprimira "Operacion valida" si add_ok devuelve 1
    int x = 0x80000000;
    int y = 0x7fffffff;
    if(add_ok(x,y)) printf("Operacion valida\n");
}

/**
 * a y b > 0
 * a > 0
 * b > 0
 * a y b < 0
 */
int add_ok(int x, int y){
    if(x<=0){
        if (y>=0){
            return 1;
        }
    } else if(y<=0){
        if (x>=0){
            return 1;
        }
    }

    return 0;
    
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