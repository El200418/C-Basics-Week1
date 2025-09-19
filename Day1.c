#include<stdio.h>
int main(){
char name[60];
int age;
printf("my name is Elmunah lungu\n");
printf("my age is 20\n");
printf("my favorite hobby is cooking\n");
printf("enter your name:\n");
scanf("%s",name);
printf("enter your age:");
scanf("%d", &age);
printf("Hello %s,you are %d years old", name, age);
return 0;
}
