#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p=(int*)malloc(5*sizeof(int));
    p=(int*)realloc(p,10*sizeof(int));
    for(int i=0;i<10;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}