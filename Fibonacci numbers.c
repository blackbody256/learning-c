#include <stdio.h>
int fibonacci (int num);
void next_fibonacci(int limit);//I change it to void since I have nothing to return
int main(){
    int a;
    printf("Enter the limit of finding fibonacci numbers:\n");
    scanf("%d", &a);
    printf("The sequence fibonacci numbers  to the limit %d is %d", a);
    next_fibonacci(a);
    return 0;
}
int fibonacci (int num){
    if (num <= 0){
        return num;//if the number is less or equal to zero  return that number as the fibonaccci
    }else{
        return fibonacci(num-2)+fibonacci(num-1);//if it's greater than zero then the fibonacci number is f(n-2)+f(n-1)
    }
}
void next_fibonacci(int limit){
    for (int i = 1;i<limit;i++){
        printf("%d", fibonacci(i));

    }
}