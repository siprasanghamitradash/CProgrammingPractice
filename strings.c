#include <stdio.h>

int main(){
    char name[] = "Sipra";
    char name2[50];
    scanf("%s",&name2);
    printf("%s",name);
    int n = strlen(name);
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
    char names[]="Sipra43567";
    for(int i=0;i<n;i++){
        if(names[i]>=97 && names[i]<=122){
            printf("%c",names[i]);
        }
    }
}