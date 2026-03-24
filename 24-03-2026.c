// 1. count list of names which start n end with vowel
// 2. find out the largest str in the array
// 3. find out the smallest str in the array
// 4. print list of ele frm the array which have more than 3 vowels
// 5. print list of str which length odd 

// Online C compiler to run C program online
#include <stdio.h>
// #include <string.h>

int length(char *a){
    int len;
    for(len =0;a[len] != '\0';len++){
        // len++;
    }
    return len;
}

int main() {
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    char arr[n][20];
    for(int i = 0;i<n;i++){
        char ele[20];
        printf("Enter name %d:",i+1);
        scanf("%s",&arr[i]);
    }
    int cnt1=0;
    printf("Names with vowels at start and at end: ");
    for(int i = 0;i<n;i++){
        if(arr[i][0] == 'A' ||arr[i][0] == 'E' ||arr[i][0] == 'I' ||arr[i][0] == 'O' ||arr[i][0] == 'U' ||arr[i][0] == 'a' ||arr[i][0] == 'e' ||arr[i][0] == 'i' ||arr[i][0] == 'o' ||arr[i][0] == 'u' ){
            // printf("check %c",arr[i][strlen(arr[i])-1]);
            int l = length(arr[i])-1;
            if(arr[i][l] == 'A' ||arr[i][l] == 'E' ||arr[i][l] == 'I' ||arr[i][l] == 'O' ||arr[i][l] == 'U' ||arr[i][l] == 'a' ||arr[i][l] == 'e' ||arr[i][l] == 'i' ||arr[i][l] == 'o' ||arr[i][l] == 'u' ){
                printf("%s ",arr[i]);
                cnt1+=1;
            }
        }
    }
    printf("\nName Count: %d",cnt1);
    // printf("%d",length("Sipra"));
    int max =0;
    for(int i = 0;i<n;i++){
        if(length(arr[i])>max){
            max = i;
        }
    }
    printf("\nMax length: %s (%d)",arr[max],length(arr[max]));
    int min =0;
    for(int i = 0;i<n;i++){
        if(length(arr[i])<min){
            min = i;
        }
    }
    printf("\nMin length: %s (%d)",arr[min],length(arr[min]));
}