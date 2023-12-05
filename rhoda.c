#include <stdio.h>
int sq(int a);
int main () {
    int a;
    printf("Enter integer\n");
    scanf("%d", &a);
    

    printf("The square is%d", sq(a));

}
int sq(int a){

        int b = (a * a);
        return b;
}