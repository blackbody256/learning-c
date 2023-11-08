#include <stdio.h>
#include <string.h>
int main(){
    //while loop repeats a section of code possibly unlimited times.
    //as long as a certain condition is true
    //a while loop might not execute at all
    char name[25];
    
    printf("What is your name\?: \n");
    fgets(name, 25,stdin);
    name[strlen(name) -1]= '\0';

    while (strlen(name)==0){
        printf("You didn't type in your name\n");
        printf("What is your name\?: \n");
        fgets(name, 25,stdin);
        name[strlen(name) -1]= '\0';

    }

    printf("Hello %s", name);
}