#include<stdio.h>
int main(){
printf("my name is Elmunah lungu\n");
printf("i am 20 years old\n");
printf("my favorite hobby is cooking\n");
char name[200];
int age;
printf("enter your name:");
scanf("%s", name);
printf("enter your age:");
scanf("%d", &age);
printf("hello %s! you are %d years old.\n", name, age);
return 0;
}

