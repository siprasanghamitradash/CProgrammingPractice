#include <stdio.h>

int main()
{
    const int a = 5;
    const int b = 10;
    const int result;
    if (a > b)
    {
        printf("The largest number is %d\n", a);
    }
    else
    {
        printf("The largest number is %d\n", b);
    }
    return 0;
}

// Program 2

#include <stdio.h>

int main()
{
    const int a = 5;
    const int b = 10;
    const int c = 7;
    const int result;
    if (a > b && a > c)
    {
        printf("The largest number is %d\n", a);
    }
    else if (b > c && b > a)
    {
        printf("The largest number is %d\n", b);
    }
    else
    {
        printf("The largest number is %d\n", c);
    }
    return 0;
}

// Program 3

#include <stdio.h>

int main()
{
    const int a = 5;
    const int b = 10;

    printf("The largest number is %d\n", (a > b) ? (a) : (b));

    return 0;
}

// Program 4

#include <stdio.h>

int main()
{
    const int a = 5;
    const int b = 10;
    const int c = 7;

    printf("The largest number is %d\n", (a > b && a > c) ? (a) : (b > c && b > a) ? (b)
                                                                                   : (c));

    return 0;
}

// Program 5

#include <stdio.h>

int main() {
    const int P = 100000;
    const int T = 3;
    const int R = 8;
    
    const float interest = (P*T*R)/100;
    
    printf('%f',interest);

    return 0;
}