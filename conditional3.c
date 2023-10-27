#include <stdio.h>
int main(){
    int a;
    printf("Enter the value: \n");
    scanf("%d", &a);
    if (a != 0){
        printf("The product is %d", a*a);
    }else {
        printf("The product is %d", a);
    }
}