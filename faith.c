#include<stdio.h>
int main(){
char name[50];
int age;
printf("my name is Elmunah lungu:");
printf("my age is 20\n");
printf("my favorite hobby is conding  and singing:\n");
printf("Enter your name:");
scanf("%s",name);
printf("Enter your age:\n");
scanf("%d",& age);
 printf("Hello %s,you are %d years old",name,age);
return 0;
}
