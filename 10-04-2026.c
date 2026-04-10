// Online C compiler to run C program online
#include <stdio.h>
// sum of prime ele frm array using func
// find the multiplication of two matrix
// frm two matrix find common ele
// delete even elemenets frm array
// sort list of names in asc
// check if name already present in array using binary searhc
// insert lis of ele in array based on user 
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int Prime(int n){
    for (int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int GetArray(int arr[]){
     int n;
     printf("Enter Length of array: ");
     scanf("%d",&n);
 for(int i=0;i<n;i++){
     printf("Enter element: ");
     scanf("%d",&arr[i]);
 }   
 return n;
}

int sumofprime(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        if(Prime(arr[i])){
            sum+=arr[i];
        }
    }
    return sum;
}

int DeleteEle(int arr[],int n)

int main() {
    int arr[100] = {};
    int n = GetArray(arr);
    PrintArray(arr,n);
    printf("\nSUm of PrIme: %d",sumofprime(arr,n));
    return 0;
}   