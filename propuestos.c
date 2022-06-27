#include<stdio.h>
#include<stdint.h>

int bis(int,int);
int bic(int,int);

int bool_or(int,int);
int bool_xor(int,int);

int mult_ok(int,int);
int64_t mult64_ok(int64_t,int64_t);

int main(){
    int x = 175;
    int y = 83;
    printf("%d  %d  %d\n",x,y,bis(x,y));
    printf("%d  %d  %d\n",x,y,bic(x,y));

    x = 684250;
    y = 28457795;
    if(bool_or(x,y) == (x | y)) printf("APROBADO\n");
    if(bool_xor(x,y) == (x ^ y)) printf("APROBADO\n");
    if(mult_ok(x,y)) printf("APROBADO\n");

    x = 45229;
    y = 2265;
    if(mult_ok(x,y)) printf("APROBADO\n");

    int64_t a = 0x35A2FA1744F80BB1;
    int64_t b = 0x3AE435BD4;
    if(mult64_ok(a,b)) printf("APROBADO\n");
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

int bool_xor(int x, int y){
    return bis(bic(x,y),bic(y,x));
}

int mult_ok(int x, int y){
    int p = x * y;
    return !x || p/x == y;
}

int64_t mult64_ok(int64_t x, int64_t y){
    int64_t p = x * y;
    return !x || p/x == y;
}