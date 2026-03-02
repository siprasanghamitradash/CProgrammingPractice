#include <stdio.h>
#include <stdbool.h>
// 4 types of function:- 
// 1. with return and parameters
// 2. with only return
// 3. with parameter only
// 4. without parameter or return

// Function declaration
bool Prime(int num);
int EvenSum1to50();
void Odd1to20();
void Prime1to20();
int SumOfDigits(int num);
void PrintF();
void EvenDigits(int num);
bool Palindrome(int num);
bool PrimePalindrome(int num);
int ProductOfOdd(int num);

// Function defination
bool Prime(int num){
    int temp = 0;
    for (int i = 2;i<num;i++){
    if (num%i==0){
        temp = 1;
        break;
    }
    }
    if (temp==0){
        return true;
    }else{
        return false;
    }
}

int EvenSum1to50(){
    int sum = 0;
    for(int i = 1; i<=50;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    return sum;
}

void Odd1to20(){
    for(int i=0;i<=20;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
}

void Prime1to20(){
    for(int i = 1;i<=20;i++){
        if(Prime(i)){
            printf("%d ",i);
        }
    }
}

int SumOfDigits(int num){
    int sum = 0;
    int number = num;
    while(number>0){
    int mod = number % 10;
    sum+= mod;
    number /= 10;
    }
    return sum;
}

void PrintF(){
    for(int j=1;j<=5;j++){
        for(int i=1;i<=5;i++){
            if(j==1 || j==3 || i ==1){
                printf("@");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void EvenDigits(int num){
    int number = num;
    while(number>0){
    int mod = number % 10;
    if(mod%2==0){
        printf("%d ",mod);
    }
    number /= 10;
    }

}

bool Palindrome(int num){
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
        return true;
    }
    else
    {
        return false;
    }
}

bool PrimePalindrome(int num){
    if(Palindrome(num)){
        if(Prime(num)){
            return true;
        }
        return false;
    }
    return false;
}

int ProductOfOdd(int num){
    int product = 1;
    int number = num;
    while(number>0){
    int mod = number % 10;
    if(mod%2!=0){
        product*= mod;
    }
    number /= 10;
    }
    return product;
}

int main() {
    int N1, N2, N3,N4,N5,N6;
    printf("Enter number to check if prime or not: ");
    scanf("%d",&N1);
    if(Prime(N1)){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    printf("\nSum of even numbers from 1-50: %d",EvenSum1to50());
    printf("\nOdd numbers from 1-20: ");
    Odd1to20();
    printf("\nPrime numbers from 1-20: ");
    Prime1to20();
    printf("\nEnter number to get sum of digits: ");
    scanf("%d",&N2);
    printf("Sum: %d",SumOfDigits(N2));
    printf("\nPrinting 'F':\n");
    PrintF();
    printf("Enter number to get even digits: ");
    scanf("%d",&N3);
    printf("Digits: ");
    EvenDigits(N3);
    printf("\nEnter number to check if palindrome or not: ");
    scanf("%d",&N4);
    if(Palindrome(N4)){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    printf("\nEnter number to check if prime palindrome or not: ");
    scanf("%d",&N5);
    if(PrimePalindrome(N5)){
        printf("Prime Palindrome");
    }else{
        printf("Not Prime Palindrome");
    }
    printf("\nEnter number to get Product of odd digits: ");
    scanf("%d",&N6);
    printf("Product: %d",ProductOfOdd(N6));
    
    return 0;
}