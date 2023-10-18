#include <stdio.h>
int main(){
int a;
printf("Enter the value of a:\nNote a<3 only\n");
scanf("%d", &a);
(a<3)?printf("nice job"):printf("stupid,read instructions");
return 0;
}