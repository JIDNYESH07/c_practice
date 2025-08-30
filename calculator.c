#include <stdio.h>
//jidnyesh patil
int main(){

int choice;
int a,b,result;
printf("enter choice");

scanf("%d", &choice);
scanf("%d", &a);
scanf("%d", &b);

if (choice ==1){
result = a+b;
};
if (choice ==2){
result = a-b;
};
if (choice ==3){
result = a%b;
};
 if (choice ==4){
result = a*b;
};

printf(result);
return 0;
}