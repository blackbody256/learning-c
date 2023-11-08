#include <stdio.h>
void birthday(int age,char name[20]){
    printf("happy birthday %s\nHappy birthday %s\nHappy birthday happy birthday\nHappy birthday %s\n", name, name, name);
    printf("You are %d years old\nYou are %d years old\n", age, age);

}
int main(){
    int new_age;
    char na[20];
    printf("Enter your name :\n");
    scanf("%s", &na);
    printf("How old are you now\?\n");
    scanf("%d", &new_age);
    birthday(new_age,na);
    birthday(new_age,na);
    birthday(new_age,na);

    return 0;
}