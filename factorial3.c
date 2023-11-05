#include<stdio.h>
int factorial(int num);
int main(){
    int number;
    printf("Enter the number you want to find the factorial of:\n");
    scanf("%d", &number);
    printf("The factorial of %d is : %d ", number, factorial(number));
    return 0;
}
int factorial(int num){
    int answer=1;
    int i;
    for (i = 1; i <= num; i++){
         answer*=i;
    }
    return answer;
}