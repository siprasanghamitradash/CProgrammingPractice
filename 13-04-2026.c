#include <stdio.h>
// Check if prime or not using pointer
// Find sum of 1-10 using pointer
// Find out sum of digits usng pointer
// print list of even digits using pointer
// swap two num using pointer in func

void SWAP(int *n1,int *n2){
  // int *n1 = &a;
  // int *n2 = &b;
  int temp = *n1;
  *n1=*n2;
  *n2=temp;
}

int main() {
    // PRIME OR NOT
    int a;
    scanf("%d",&a);
    int *n= &a;
    int temp=0;
    for(int i=2;i<a;i++){
        if((*n)%i == 0){
            temp = 1;
            break;
        }
    }
    if(temp==0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    
    // SUM OF 1-10
    int sum = 0;
    int *s =&sum;
    for(int i=1;i<11;i++){
      *s=*s+i;
    }
    printf("\nSUM 1-10: %d",sum);
    
    // SUM OF DIGITS
    int num;
    scanf("%d",&num);
    int n1 = num;
    int *n2 = &n1;
    int sum2=0;
    int *s2 = &sum2;
    while(n1>0){
      int dig = (*n2)%10;
      *s2=*s2+dig;
      *n2=*n2/10;
    }
    printf("\nSum of digits %d: %d",num,sum2);
    
  // PRINT EVEN DIGITS
    printf("\nEVEN digits: ");
    int n3 = num;
    int *n4 = &n3;
    while(n3>0){
      int dig = (*n4)%10;
      if(dig%2==0){
        printf("%d ",dig);
      }
      *n4=*n4/10;
    }
    
    
    // SWAP NUMBERS
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int *num3 =&num1;
    int *num4 =&num2;
    printf("\n%d %d",num1,num2);
    SWAP(num3,num4);
    printf("\n%d %d",num1,num2);
    
    return 0;
}