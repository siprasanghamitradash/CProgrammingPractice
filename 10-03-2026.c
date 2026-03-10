// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}