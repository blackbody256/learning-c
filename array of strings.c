#include <stdio.h>
#include <string.h>
int main(){
    char cars[3][10]={"camaro", "Benz", "mustang"};
    //cars[benz]="tesla"; 
    /*To modify the elements of the 2d array we cant just assign like usually
    thats why i included string.header so that i use a function string copy (strcpy)*/
    strcpy(cars[0], "tesla");  
    for (int i =0; i< (sizeof(cars)/sizeof(cars[0])); i++){
        printf("%s\n", cars[i]);
    }

}