#include <stdio.h>
int main(){
    int first_num=0,second_num=1,next_fibo, i, limit;
    printf("Enter limit of the fibonacci sequence:\n");
    scanf("%d", &limit);
    for(i=0; i<limit; i++){
        if(i<=1){
            next_fibo= i;//this covers for 1 and 0
        }else{
            next_fibo=first_num + second_num;//this is the formula of finding fibonacci numbers f(n-1)+f(n-2)
            first_num=second_num;//this is necessary so that first number equals the second number in the sequence
            second_num=next_fibo;//this is necessary so that second number equals the next number
        }    
        printf("%d\t", next_fibo);
    }
    
    return 0;
}