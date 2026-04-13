// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a = 10;
    int *p =&a;
    printf("%d  ",a);
    printf("%d  ",*p);
    printf("%d  ",&a);
    printf("%d  ",p);
    return 0;
}