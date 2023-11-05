#include <stdio.h>
int is_prime(int num);
int main() {
    int lower;
    int upper;
    int prime;
    printf("Enter the lower boundary:\n");
    scanf("%d", &lower);
    printf("Enter the upper boundary:\n");
    scanf("%d", &upper);
    printf("The prime numbers in the range of %d to %d is\n\n:", lower, upper);
    for (prime = lower; prime<=upper; prime++){
        if (is_prime(prime)){
            printf("%4d", prime);
    }}
    return 0;}

int is_prime(int num){
    if (num <=1){
        return 0;
    }
    if (num <=3){
        return 1;
    }
    if (num%2 == 0 || num%3 == 0){
        return 0;
    }
    for (int k=5;k<=num;k+=6){
        if(num%k ==0 || num% k+2==0){
            return 1;
        }
    return 1;
     }}


