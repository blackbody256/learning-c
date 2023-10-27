#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of y:");
    scanf("%d", &y);
    if (x>y){
        y=x-y;
    }else{
        y=y-x;
    }
    printf("The absolute difference is %d", y);
}