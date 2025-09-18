#include<stdio.h>
int main() {
    int a =1;
    int b =2;
    printf("AND = %d\n", a && b);
    printf("OR = %d\n", a || b);
   printf("XOR = %d\n", (a||b) && !(a&&b));
    return 0;
}