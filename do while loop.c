#include <stdio.h>
int main(){
    //while loop checks a condition, then executes a block of code if the condition is true
    //do while loop always executes a block of code once, then checks a condition
    int num;
    int sum;

    do{
        printf("Enter a number above zero");
        scanf("%d", &num);
        
        sum+=num;

    }while (num>0);
    printf("%d", sum);

}