#include <stdio.h>
int main() {    
    int n = 2564;
    int sum = 0;
    while (n > 0) {
        int mod = n%10;
        sum += mod;
        n /= 10;
    }
    printf("The sum of the digits is %d\n", sum);
    return 0;
}