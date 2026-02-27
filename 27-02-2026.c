// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num = 13;
    // First one
    printf("Prime numbers between 21-50: ");
    for(int j = 21; j<50;j++){
        int temp = 0;
        for (int i = 2;i<j;i++){
        if (j%i==0){
            temp = 1;
            break;
        }
    }
    if (temp==0){
        
        printf("%d ",j);
    }
    }
    // Second one
    printf("\nTotal Prime numbers between 11-40: ");
    int count=0;
    for(int j = 11; j<40;j++){
        int temp = 0;
        for (int i = 2;i<j;i++){
        if (j%i==0){
            temp = 1;
            break;
        }
    }
    if (temp == 0){
        count+=1;
    }
    }
    printf("%d",count);
    // Third one
    printf("\nSum of Prime numbers between 21-40: ");
    int sum=0;
    for(int j = 21; j<40;j++){
        int temp = 0;
        for (int i = 2;i<j;i++){
        if (j%i==0){
            temp = 1;
            break;
        }
    }
    if (temp == 0){
        sum+=j;
    }
    }
    printf("%d",sum);
    
    // Fourth one
    printf("\nProducts of Prime numbers between 1-10: ");
    int product=1;
    for(int j = 1; j<10;j++){
        int temp = 0;
        for (int i = 2;i<j;i++){
        if (j%i==0){
            temp = 1;
            break;
        }
    }
    if (temp == 0){
        product*=j;
    }
    }
    printf("%d",product);
    // Fifth one
    int N1;
    printf("\nEnter number to get next Prime Number:");
    scanf("%d",&N1);
    // int found = 0;
    while(1){
        N1+=1;
        int temp = 0;
        for (int i = 2;i<N1;i++){
        if (N1%i==0){
            temp = 1;
            break;
        }
    }
    if (temp == 0){
        printf("Found: %d",N1);
        break;
    }
    }
    
    // Sixth one
    int N2;
    printf("\nEnter number to get previous Prime Number:");
    scanf("%d",&N2);
    int found2 = 0;
    while(1){
        N2-=1;
        int temp = 0;
        for (int i = 2;i<N2;i++){
        if (N2%i==0){
            temp = 1;
            break;
        }
    }
    if (temp == 0){
        printf("Found: %d",N2);
        break;
    }
    }
    
    
    // seventh one
    int N3;
    printf("\nEnter number to check reverse is prime or not: ");
    scanf("%d",&N3);
    int reverse = 0;
    while (N3 > 0)
    {
        int digit = N3 % 10;
        reverse = reverse * 10 + digit;
        N3 /= 10;
    }
    int temp = 0;
        for (int i = 2;i<reverse;i++){
        if (reverse%i==0){
            temp = 1;
            break;
        }
    }
    if (temp == 0){
        printf("Prime: %d",reverse);
    }else{
        printf("Not Prime: %d",reverse);
    }
    // Eight one
    int N4;
    printf("\nEnter number to check number of prime digit: ");
    scanf("%d",&N4);
    // int reverse = 0;
    int count2 = 0;
    while (N4 > 0)
    {
        int digit = N4 % 10;
        // reverse = reverse * 10 + digit;
        N4 /= 10;
    
        int temp = 0;
        for (int i = 2;i<digit;i++){
        if (digit%i==0){
            temp = 1;
            break;
        }
    }
    if (temp == 0){
        count2+=1;
    }
    }
    printf("Count: %d",count2);
    
    // Ninth one
    int N5;
    printf("\nEnter number to check product of digit prime or not: ");
    scanf("%d",&N5);
    // int reverse = 0;
    int product2 = 1;
    while (N5 > 0)
    {
        int digit = N5 % 10;
        // reverse = reverse * 10 + digit;
        N5 /= 10;
        product2*=digit;
    }
    
    
    int temp2 = 0;
        for (int i = 2;i<product2;i++){
        if (product2%i==0){
            temp2 = 1;
            break;
        }}
    if (temp2 == 0){
        
    printf("Prime Product: %d",product2);
    }else{
        printf("Not Prime Product: %d",product2);
    
    }
            
    // Tenth one
    int N6;
    printf("\nEnter number to check sum of digit prime or not: ");
    scanf("%d",&N6);
    // int reverse = 0;
    int sum2 = 0;
    while (N6 > 0)
    {
        int digit = N6 % 10;
        // reverse = reverse * 10 + digit;
        N6 /= 10;
        sum2+=digit;
    }
    
    
    int temp3 = 0;
        for (int i = 2;i<sum2;i++){
        if (sum2%i==0){
            temp3 = 1;
            break;
        }}
    if (temp3 == 0){
        
    printf("Prime Sum: %d",sum2);
    }else{
        printf("Not Prime Sum: %d",sum2);
    
    }
    
    // Eleventh one
    
    int N7;
    printf("\nEnter number to check reverse is prime palindrome or not: ");
    scanf("%d",&N7);
    int check = N7;
    int reverse2 = 0;
    while (N7 > 0)
    {
        int digit = N7 % 10;
        reverse2 = reverse2 * 10 + digit;
        N7 /= 10;
    }
    int temp4 = 0;
        for (int i = 2;i<reverse2;i++){
        if (reverse2%i==0){
            temp4 = 1;
            break;
        }
    }
    if (temp4 == 0 && reverse2==check){
        printf("Prime Palindrome: %d",reverse2);
    }else if(temp4 == 0){
        printf("Prime but not Palindrome: %d", reverse2);
    }else if (reverse2==check){
        printf("Not Prime Palindrome: %d",reverse2);
    }else{
        printf("Neither Prime Nor Palindrome: %d",reverse2);
    }
    
    // twelveth one
    int N8;
    printf("\nEnter number to check length is prime or not: ");
    scanf("%d",&N8);
    // int reverse = 0;
    int len = 0;
    while (N8 > 0)
    {
        int digit = N8 % 10;
        // reverse = reverse * 10 + digit;
        N8 /= 10;
        len+=1;
    }
    
    
    int temp5 = 0;
        for (int i = 2;i<len;i++){
        if (len%i==0){
            temp5 = 1;
            break;
        }}
    if (temp5 == 0){
        
    printf("Prime Length: %d",len);
    }else{
        printf("Not Prime Length: %d",len);
    
    }
    
    
    
    
return 0;
}