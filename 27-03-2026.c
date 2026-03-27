// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char arr[] = {'8','7','5','2','9'};
    char arr1[][3] = {"67","78","24","53","11"};
    int arr2[] = {678,56,12,34,90,102,45};
    int sum = 0;
    for(int i = 0;i<5;i++){
        sum+= (int)arr[i]-48;
    }
    printf("Sum: %d",sum);
    printf("\n\nSum of digits of num(str):");
    for(int i = 0;i<5;i++){
        printf(" \n%s: %d",arr1[i],(int)arr1[i][0]-48+(int)arr1[i][1]-48);
    }
    printf("\n\nSum of digits of num(int):");
    for(int i = 0;i<7;i++){
        int s = 0;
        int n = arr2[i];
        while(n>0){
            s+=n%10;
            n/=10;
        }
        printf(" \n%d: %d",arr2[i],s);
    }
    return 0;
}