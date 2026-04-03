// 1/ check the array aready sorted or not
// 2/ find out sum of array elements except smollest and lorgest
// 3/ check the elements arraged in ascending order or descending order
// 4/ sort array in odd index
// Online C compiler to run C program online
#include <stdio.h>

void PrintArr(int arr[],int n){
    printf("[");
    for(int i=0;i<n-1;i++){
        printf("%d,",arr[i]);
    }
    printf("%d]\n",arr[n-1]);
}

void SortArray(int arr[],int n){
    int c = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                c+=1;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void SortArrayOdd(int arr[],int n){
    int c = 0;
    for(int i=0;i<n;i+=2){
        for(int j=i+2;j<n;j+=2){
            if(arr[i]>arr[j]){
                c+=1;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int CheckAscSort(int arr[],int n){
    int c = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                c+=1;
            }
        }
    }
    return c;
}

int CheckDescSort(int arr[],int n){
    int c = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                c+=1;
            }
        }
    }
    return c;
}

int SumArray(int arr[],int n){
    int max = 0;
    int min = arr[0];
    int sum = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        sum+=arr[i];
    }
    sum -= max+min;
    return sum;
}

int main() {
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr1[n];
    for(int i = 0;i<n;i++){
        printf("Enter Element %d:",i+1);
        scanf("%d",&arr1[i]);
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = arr1[i];
    }
    if(CheckAscSort(arr,n)>0 && CheckDescSort(arr,n)>0){
        printf("NOT SORTED\n");
        PrintArr(arr,n);
    }else if(CheckAscSort(arr,n)==0){
        printf("SORTED (Ascending)\n");
        PrintArr(arr,n);
    }else{
        printf("SORTED (Descending)\n");
        PrintArr(arr,n);
    }
    
    printf("\n");
    
    printf("Sum without largest or smallest: %d",SumArray(arr,n));
    printf("\n");
    SortArrayOdd(arr,n);
    printf("\nSorted Odd Index(Asc): ");
    PrintArr(arr,n);
    return 0;
}