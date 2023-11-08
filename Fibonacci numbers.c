#include <stdio.h>
int fibonacci (int num);
int main(){
    int a,i;

    printf("Enter the limit of finding fibonacci numbers:\n");
    scanf("%d", &a);
    printf("The sequence fibonacci numbers  to the limit %d is\n", a);
   for(i=0;i<=a;i++){
       printf("%d\t", fibonacci(i));

   }

    return 0;
}
int fibonacci (int num){
    if (num <=1){
        return num;//this is to cover for 1 and 0
    }else{
        return fibonacci(num-1)+fibonacci(num-2);//if it's greater than zero then the fibonacci number is f(n-2)+f(n-1)
    }
}


