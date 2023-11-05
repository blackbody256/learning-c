#include <stdio.h>
int main(){
    int number;
    printf("Enter the number you want to check\n");
    scanf("%d", &number);
    //the switch is used to check if the remainder is equal to 0
    //,but it would be efficient to use an if statement
    switch(number%2){
        case 0:
        printf("The number %d is an even number\n", number);
        break;
        default:
        printf("The number %d is a odd number\n", number);
        break;
    }

    return 0;
}