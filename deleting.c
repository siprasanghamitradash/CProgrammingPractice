// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] ={10,20,90,80,50,60};
    int size=6;
    int ele = 50;
    int index = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == ele){
            index=i;
        }
    }
    for(int i=index+1;i<size;i++){
        arr[i-1]=arr[i];
    }
    size--;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}