#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Number: %d\n", num);
    int c = 0;
    int n0 = num;
    while (n0 > 0)
    {
        c++;
        n0 /= 10;
    }
    printf("%d\n", c);
    int product = 1;
    int number = num;
Product:
    int mod = number % 10;
    if (mod % 2 != 0)
    {
        product *= mod;
    }
    number /= 10;
    if (number > 0)
    {
        goto Product;
    }
    printf("The product of odd digits is %d\n", product);
    // Second one: Reverse
    int n = num;
    printf("Reverse of the number is ");
Reverse:
    int a = n % 10;
    printf("%d", a);
    n /= 10;
    if (n > 0)
    {
        goto Reverse;
    }
    printf("\n");
    // Third One: palindrome
    int n2 = num;
    int reverse = 0;
    while (n2 > 0)
    {
        int digit = n2 % 10;
        reverse = reverse * 10 + digit;
        n2 /= 10;
    }
    if (reverse == num)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }
    // Fourth one: Armstrong number
    int n3 = num;
    int sum = 0;
Armstrong:
    int digit2 = n3 % 10;
    sum += digit2 * digit2 * digit2;
    n3 /= 10;
    if (n3 > 0)
    {
        goto Armstrong;
    }
    if (sum == num)
    {
        printf("The number is an Armstrong number\n");
    }
    else
    {
        printf("The number is not an Armstrong number\n");
    }
    // Fifth one: Largest among sum of odd didgits and sum of even digits
    int n4 = num;
    int sum_odd = 0;
    int sum_even = 0;
Largest:
    int digit3 = n4 % 10;
    if (digit3 % 2 == 0)
    {
        sum_even += digit3;
    }
    else
    {
        sum_odd += digit3;
    }
    n4 /= 10;
    if (n4 > 0)
    {
        goto Largest;
    }
    if (sum_odd > sum_even)
    {
        printf("The largest sum is of odd digits: %d > %d\n", sum_odd, sum_even);
    }
    else if (sum_even > sum_odd)
    {
        printf("The largest sum is of even digits: %d > %d\n", sum_even, sum_odd);
    }
    else
    {
        printf("The sums of odd and even digits are equal: %d\n", sum_odd);
    }
    // Sixthone: Difference between sum of odd digits and sum of even digits
    int n5 = num;
    printf("The difference between sum of odd and sum of even is %d - %d = %d\n", (sum_odd > sum_even) ? sum_odd : sum_even, (sum_even < sum_odd) ? sum_even : sum_odd, (sum_odd > sum_even) ? (sum_odd - sum_even) : (sum_even - sum_odd));

    return 0;
}
