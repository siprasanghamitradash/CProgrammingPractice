// Online C compiler to run C program online
#include <stdio.h>

// find the total digit of memory address of a
// find memory address +ve or -Ve
// find the total no of prime elements frm array
// reverse the elements frm array
// find max min frm array
// find total no. of letters frm string
// count vowels using pointer
// find sum of 2 val using double pointer;
// declare a func to swap 2 nums using double pointer

int isPrime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void PrimeArray(int arr[],int n){
  int *p =arr;
  for(int i=0;i<n;i++){
    if(isPrime(*(p+i))){
      printf("%d ",*(p+i));
    }
  }
}

int main() {
    int n;
    scanf("%d",&n);
    int *p = &n;
    printf("Address: %d\n",p);
    int add = (int)p;
    if(add<0){
      printf("Negative Memory Address\n");
      add*=(-1);
    }else{
      printf("Positive Memory Address\n");
    }
    int c=0;
    while(add>0){
        c+=1;
        (add)/=10;
    }
    printf("Digits: %d\n",c);
    
    int arr[] ={13,23,45,67,89};
    PrimeArray(arr,5);
    
    return 0;
}