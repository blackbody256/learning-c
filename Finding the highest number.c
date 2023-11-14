#include <stdio.h>
int largest(int a, int b, int c);
int main(){
    int num1, num2, num3;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    printf("Enter the third number:\n");
    scanf("%d", &num3);
    printf("The largest number is %d", largest(num1, num2, num3));

    return 0;
}
int largest(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else {
    return c;}
}
