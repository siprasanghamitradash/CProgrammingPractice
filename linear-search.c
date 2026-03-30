// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] = {10,23,45,67,89,90,12,34,56,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 12;
    int temp = 0;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            printf("%d",i);
            temp=1;
            break;
        }
    }
    if (temp==0){printf("%d",-1);}

    return 0;
}