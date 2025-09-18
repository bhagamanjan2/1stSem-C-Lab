#include<stdio.h>
int main() {
    int a= 10;
    int b= 500;
    int c,d,f;
    float e;
    c = a + b;
    d = a - b;
    f = a * b;
    e = (float) a / b;
    printf("sum is %d\n",c);
    printf("sub is %d\n",d);
    printf("mul is %d\n",f);
    printf("div is %f\n",e);
return 0;
}