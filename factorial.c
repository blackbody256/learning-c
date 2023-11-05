#include <stdio.h>
int factorial(int num);
int main(){
    int a;
    printf("Enter the number you want to find factorial of:\n");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));

    return 0;
}
int factorial(int num){
    int answer;
    if (num==0){
        answer=1;
    }else{answer=num * factorial(num-1);}
    return answer;
}
