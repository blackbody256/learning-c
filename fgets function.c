#include <stdio.h>
int main(){
    char name[20];
    int age;
    printf("Enter your name: ");
    //scanf("%s", &name);
    fgets(name,20, stdin);/*we use fgets as scanf because fgets is
    able to read white spaces while scanf cant read white spaces*/
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Hello %sHow are you.\n You are %d years old.", name, age);

    return 0;
}
