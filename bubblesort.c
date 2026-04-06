#include <stdio.h>

int main() {
    int arr[] = {10,2,6,90,87,1,67,23,43,34,56,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}