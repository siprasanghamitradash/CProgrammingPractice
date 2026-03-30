//Replase the existing elements using linear search
// print the list of ele within specific range
// print the list of elements which is not in specific range
// swap first n last ele of array
// find out the sum of first largest and second largest of array
// 
#include <stdio.h>
void PrintArr(int arr[],int n){
    printf("[");
    for(int i=0;i<n-1;i++){
        printf("%d,",arr[i]);
    }
    printf("%d]\n",arr[n-1]);
}

void Replace(int arr[],int n,int a,int b){
    int f=0;
    for(int i=0;i<n;i++){
        if(arr[i] == a){
            arr[i] =b;
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Element not found");
    }
    printf("\n");
}

void ElementsinLimit(int arr[],int n,int a,int b){
    printf("Elements within limit: ");
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]<a && arr[i]>b){
            printf("%d ",arr[i]);
            temp=1;
        }
    }
    if(temp==0){
        printf("No Elements found");
    }
    printf("\n");
}

void ElementsnotinLimit(int arr[],int n,int a,int b){
    printf("Elements not within limit: ");
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]>a || arr[i]<b){
            printf("%d ",arr[i]);
            temp=1;
        }
    }
    if(temp==0){
        printf("No Elements found");
    }
    printf("\n");
}

void SwapFirstNLast(int arr[],int n){
    int a = arr[0];
    int b =  arr[n-1];
    arr[0] = b;
    arr[n-1] = a;
}

int SumofLargests(int arr[],int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int max2=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }
    }
    return (max+max2);
}

int main() {
    int n;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        int ele;
        printf("Enter element %d:",i+1);
        scanf("%d",&ele);
        arr[i] = ele;
    }
    printf("Your Array: ");
    printf("\n");
    PrintArr(arr,n);
    printf("\n");
    
    // First Problem
    int tgt1,replace;
    printf("Enter target number:");
    scanf("%d",&tgt1);
    printf("Enter replacement number:");
    scanf("%d",&replace);
    Replace(arr,n,tgt1,replace);
    printf("Resultant Array: ");
    PrintArr(arr,n);
    printf("\n");
    
    // Second n Third Problem
    int up,low;
    printf("Enter Upper limit: ");
    scanf("%d",&up);
    printf("Enter Lower limit: ");
    scanf("%d",&low);
    ElementsinLimit(arr,n,up,low);
    ElementsnotinLimit(arr,n,up,low);
    
    // Fourth Problem
    printf("Swapping First and Last element: ");
    SwapFirstNLast(arr,n);
    PrintArr(arr,n);
    
    
    // Fifth Problem
    printf("Sum of First and Second Largest: %d",SumofLargests(arr,n));
    return 0;
}