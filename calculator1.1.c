#include <stdio.h>
int main(){
    char operator;
    int num1;//this represents the first number
    int num2;//this represents the second character
    int answer;//this represents the final charater
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    printf("Enter the operator to use:\nNote only (+,-,/ and * only)\n");
    scanf(" %c", &operator);//note the space before the %c,
    // it is necessary to input a character while using a scanf
    //the switch is used to determine the operation to take with
    // consideration of the operator chosen
    switch(operator){
        case '+':
        answer= num1+num2;
        printf("The sum of %d and %d is %d", num1, num2, answer);
        break;
        case '-':
        answer= num1-num2;
        printf("The sum of %d and %d is %d", num1, num2, answer);
        break;
        case '/':
        answer= num1/num2;
        printf("The sum of %d and %d is %d", num1, num2, answer);
        break;
        case '*':
        answer= num1*num2;
        printf("The sum of %d and %d is %d", num1, num2, answer);
        break;
        default:
        printf("The entered operator is not supported\n read the instructions and stop wasting time");
        break;
    }


    return 0;
}