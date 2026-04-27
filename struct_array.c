// Online C compiler to run C program online
#include <stdio.h>
struct Student{
  char name[50];
  int age;
  int rollno;
};
int main() {
    struct Student s[5];
    for(int i=0;i<5;i++){
        scanf("%s %d %d",s[i].name,s[i].age,s[i].rollno);
    }
    for(int i=0;i<5;i++){
        printf("\n%s %d %d",s[i].name,s[i].age,s[i].rollno);
    }
    return 0;
}