#include <stdio.h>
int main(){
    //nested loop is a loop inside another loop
    int rows;
    int columns;
    char symbol;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns\n");
    scanf("%d", &columns);
    printf("Enter the symbol:\n");
    scanf("\n%c", &symbol);
    for (int i=1;i<=rows;i++){
        for(int j=1;j<=columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
}