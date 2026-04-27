// Online C compiler to run C program online
#include <stdio.h>
struct Student{
  char name[50];
  int age;
  int rollno;
};
int main() {
    struct Student s1={"Sipra",18,8};
    struct Student s2={"Khusi",19,29};
    printf("%s %d %d",s1.name,s1.age,s1.rollno);
    printf("\n%s %d %d",s2.name,s2.age,s2.rollno);
    
    return 0;
}