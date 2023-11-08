#include <stdio.h>
#include <string.h>
int main(){
    char string1[8]="Black";
    char string2[8]="Body";
    strlwr(string1);
    printf("%s", string1);
    return 0;
}