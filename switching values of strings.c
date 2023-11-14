#include <stdio.h>
#include <string.h>
int main(){
    char x [15]= "water";
    char y [15]="lemonde";
    char temp[15];
    /*to switch the values of the array, I need to introduce a third temporary variable and use strcpy instead of just assigning*/
    strcpy(x,temp);
    strcpy(x, y);
    strcpy(temp,y);
    printf("x=%s/ny=%s",x, y);

    return 0;

}