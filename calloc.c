#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p =(int*)calloc(5,sizeof(int)); // allocates memory for 5 integers and initializes them to 0
    // p=(int*)malloc(5*sizeof(int)); //allocates memory for 5 integers
    p=(int*)realloc(p,10*sizeof(int)); //reallocates memory from 5 integers to 10 integers
    for(int i=0;i<10;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d ",p[i]);
    }
    free(p); //erases the allocated memory i.e. saves storage
    return 0;
}