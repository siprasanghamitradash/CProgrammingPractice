// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left =0;
    int right = n-1;
    int target = 200;
    int ind = 0;
    int temp = 0;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==target){
            temp=1;
            ind=mid;
            break;
        }else if(arr[mid]<target){
            left = mid+1;
        }else{
            right =mid-1;
        }
    }
    if(temp==0){
        printf("%d",-1);
    }else{
        printf("%d",ind);
    }
    return 0;
}