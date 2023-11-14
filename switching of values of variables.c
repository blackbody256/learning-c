#include <stdio.h>
#include <string.h>
int main(){
    char x ='X';
    char y ='Y';
    int temp;
    temp=x;
    x=y;
    y=temp;
    /*to switch values of variables, you have to introduce a third temporary variable to store one of the value temporary*/
    printf("x=%c\ny=%c\n", x, y);    

    return 0;
}