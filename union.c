#include <stdio.h>

union Student{
    int age;
    float cgpa;
    int roll;
};

int main(){
    union Student s;
    s.age = 24;
    printf("%d\n",s.age);
    s.cgpa = 8.5;
    printf("%d",s.age);
}