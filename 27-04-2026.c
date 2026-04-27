                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           // Online C compiler to run C program online
#include <stdio.h>

// get 5 employee details from the user and find who has highest salary
// store list of student details frm the user and print student name who failed exams
// print student details who have cgpa>8.5
// 

struct Employee{
  char name[50];
  int age;
  int salary;
};
struct Student{
  char name[50];
  int age;
  float cgpa;
};
int main() {
    struct Employee e[5];
    for(int i=0;i<5;i++){
        scanf("%s %d %d",e[i].name,&e[i].age,&e[i].salary);
    }
    int high = e[0].salary;
    int ind=0;
    for(int i=0;i<5;i++){
      if(e[i].salary>high){
        high=e[i].salary;
        ind=i;
      }
    }
    printf("%s %d %d",e[ind].name,e[ind].age,e[ind].salary);
    
    struct Student s[5];
    for(int i=0;i<5;i++){
        scanf("%s %d %f",s[i].name,&s[i].age,&s[i].cgpa);
    }
    printf("\nFailing students:");
    for(int i=0;i<5;i++){
      if(s[i].cgpa<2.5){
        printf("\n%s %d %.2f",s[i].name,s[i].age,s[i].cgpa);
      }
    }
    printf("\ncgpa > 8.5 students:");
    for(int i=0;i<5;i++){
      if(s[i].cgpa>8.5){
        printf("\n%s %d %.2f",s[i].name,s[i].age,s[i].cgpa);
      }
}}