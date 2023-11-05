#include <stdio.h>
int factorial(int b);
int  main(){
    int a;
    printf("Enter the number you want to find factorial of:\n");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));

    return 0;
}
int factorial(int b){

   return (b == 0)? 1: b* factorial(b-1);

}