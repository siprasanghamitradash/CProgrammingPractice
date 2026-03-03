#include <stdio.h>

int Factorial(int num){
    if (num==0 || num==1){
        return 1;
    }else{
        return num*Factorial(num-1);
    }
}

int Factorial2(int num){
    int product = 1;
    while(num>0){
        product*=num;
        num-=1;
    }
    return product;
}


void Fibonacci(int num){
    int a = 0;
    int b = 1;
    printf(" %d %d ",a,b);
    num-=2;
    while(num>0){
        int c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
        num-=1;
    }
}

int main() {
    // Write C code here
    printf("%d",Factorial2(5));
    Fibonacci(10);

    return 0;
}