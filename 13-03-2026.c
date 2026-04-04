#include <stdio.h>

int isPrime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter length of array(int): ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum =0;
    int prod = 1;
    for(int i = 0; i<n ;i++){
        sum+=arr[i];
        if(arr[i]%2==0){
            prod*=arr[i];
        }
    }
    printf("Sum of all digits: %d\n",sum);
    printf("Product of even digits: %d\n",prod);
    printf("Sum of all even digits: ");
    for(int i = 0; i<n ; i++){
            int n = arr[i];
            int s = 0;
            while(n>0){
                int dig = n%10;
                n/=10;
                s+= dig;
            }
            printf("%d ",s);
    }
    printf("\nSum of all prime numbers: ");
    int s2 = 0;
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            s2+=arr[i];
        }
    }
    printf("%d\n",s2);
    printf("Sum of digits in prime no.: ");
    for(int i=0;i<n;i++){
        int n = arr[i];
        if(isPrime(arr[i])){
            int s;
            while(n>0){
            int dig = n%10;
                n/=10;
                s+= dig;
            }
            printf("%d ",s);
        }
        
    }
    int slen;
    printf("\nEnter length of array(str): ");
    scanf("%d",&slen);
    char arr2[slen][20];
    for(int j = 0; j<slen;j++){
        scanf("%s",&arr2[j]);
    }
    printf("Names starting with a vowel: ");
    for(int i = 0; i<slen;i++ ){
        // char f = arr[i][0];
        if(arr2[i][0] == 'a' ||arr2[i][0] == 'u' ||arr2[i][0] == 'o' ||arr2[i][0] == 'i' ||arr2[i][0] == 'e' || arr2[i][0] == 'U' ||arr2[i][0] == 'O' ||arr2[i][0] == 'I' ||arr2[i][0] == 'E' ||arr2[i][0] == 'A'){
            printf("%s ",arr2[i][0]);
        }
    }
    
    printf("\nNames with even length: ");
    for(int j = 0; j<slen;j++ ){
    int len = 0;
    for (int i = 0; arr2[j][i] != '\0'; i++) {
        len++;
    }
    if(len%2 == 0){
        printf("%s ",arr2[j]);
    }

    }
    return 0;
}