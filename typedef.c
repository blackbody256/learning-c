#include<stdio.h>
#include<string.h>
typedef char name[25];// so here I have given the datatype char [25] a nickname of Name
typedef struct{
    char name[10];
    int age;
    int id;
}worker;// here i am  nicknaming a struct
int main(){
    //typedef is keyword that gives an existing datatype or struct a nickname
    name player= "Black";
    printf("my name is %s\n", player);
    
    worker worker1;
    strcpy(worker1.name, "Andrew");
    worker1.age= 19;
    worker1.id=123456;

    worker worker2;
    strcpy(worker2.name,"Akanga");
    worker2.age=20;
    worker2.id=987665;

    printf("%s has %d years and id number is %d\n", worker1.name, worker1.age, worker1.id);
    printf("%s has %d years and id number is %d\n", worker2.name, worker2.age, worker2.id);
}