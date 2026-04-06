// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] = {10,2,6,90,87,15,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    // End Insertion
    
    arr[n] = 100;
    n++;
    
    // Start Insertion
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]= 200;
    n++;
    
    // Middle Insertion
    int element = 300;
    int pos = 3;
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=element;
    n++;
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}