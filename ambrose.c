#include <stdio.h>
int main(){
    int sum = 0;
    int a = 1;
    int b = 1;
    while(b <= 50){
        sum = sum + a;
        a = a + 2;
        b = b +1;
    }
    printf("The sum of the first 50 odd numbers is %d\n", sum);
    return 0;
}