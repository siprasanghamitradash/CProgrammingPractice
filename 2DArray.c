// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = sizeof(arr[0])/sizeof(arr[0][0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of rows: ");
    for(int i=0;i<n;i++){
        int s = 0;
        for(int j=0;j<n;j++){
            s+=arr[i][j];
        }
        printf("%d ",s);
    }
    printf("\nSum of left diagonal: ");
    int s = 0;
    int in = 0;
    for(int i=0;i<n;i++){
        s+=arr[i][in];
        in+=1;
    }
    printf("%d ",s);
    printf("\nSum of right diagonal: ");
    int s1 = 0;
    int in1 = x-1;
    for(int i=0;i<n;i++){
        s1+=arr[i][in1];
        in1-=1;
    }
    printf("%d ",s1);
    return 0;
}