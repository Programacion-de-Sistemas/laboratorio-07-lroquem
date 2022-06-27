#include<stdio.h>

int bis(int,int);
int bic(int,int);

int bool_or(int,int);
int bool_xor(int,int);

int main(){
    int x = 175;
    int y = 83;
    printf("%d  %d  %d\n",x,y,bis(x,y));
    printf("%d  %d  %d\n",x,y,bic(x,y));

    x = 684250;
    y = 28457795;
    if (bool_or(x,y) == (x | y)) printf("APROBADO\n");

}

int bis(int x, int y){
    return x | y;
}

int bic(int x, int y){
    return x & (~y);
}

int bool_or(int x, int y){
    return bis(x,y);
}