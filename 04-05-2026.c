#include <stdio.h>
#include <string.h>

struct Emp{
  char name[50];
  int sal;
};

struct Stu{
  char name[50];
  int age;
};

int Vowel(char name[]){
  int n = strlen(name)-1;
  if(name[0] == 'a' ||name[0] == 'e' ||name[0] == 'i' ||name[0] == 'o' ||name[0] == 'u' ||name[0] == 'A' ||name[0] == 'E' ||name[0] == 'I' ||name[0] == 'O' ||name[0] == 'U'){
    if(name[n] == 'a' ||name[n] == 'e' ||name[n] == 'i' ||name[n] == 'o' ||name[n] == 'u' ||name[n] == 'A' ||name[n] == 'E' ||name[n] == 'I' ||name[n] == 'O' ||name[n] == 'U'){
      return 1;
    }
  }
  return 0;
}

int main(){
  struct Emp E[3] = {
        {"Rekha", 1000000},
        {"Jaya", 1500000},
        {"Sushma", 1800000}
    };
    
    struct Stu S[3] = {
        {"Rekha", 10},
        {"Jaya", 17},
        {"Sushma", 24}
    };
  
  printf("\nEmployees with names with more than 10 letters:");
  int f=0;
  for(int i=0;i<3;i++){
    if(strlen(E[i].name)>10){
      f+=1;
      printf("\n%s: %d",E[i].name,E[i].sal);
    }
  }
  if(f==0){
    printf("\nNo one with a name more than 10 letters!");
  }
  printf("\nStudents eligible to vote:");
  int f1=0;
  for(int i=0;i<3;i++){
    if(S[i].age>17){
      f1+=1;
      printf("\n%s: %d",S[i].name,S[i].age);
    }
  }
  
  if(f1==0){
    printf("\nNo one eligible to vote!");
  }
  
  printf("\nEmployees with names starting and ending with vowel:");
  int f2=0;
  for(int i=0;i<3;i++){
    if(Vowel(E[i].name)){
      f2+=1;
      printf("\n%s: %d",E[i].name,E[i].sal);
    }
  }
  if(f2==0){
    printf("\nNo one with suitable name!");
  }
  printf("\nEmployees with taxes pending:");
  int f3=0;
  for(int i=0;i<3;i++){
    if(E[i].sal>1200000){
      f3+=1;
      printf("\n%s: %d",E[i].name,E[i].sal);
    }
  }
  if(f3==0){
    printf("\nNo one with suitable salary!");
  }
}