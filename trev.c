#include <stdio.h>
int main (){

    for( int i = 1, j = 0; 5 >= i, j <= 20; i ++, j = j + 1)
    // j < 20 is the termination condition
    {
        printf("%d\t%d\n", i, j);
    }
    return 0;
}