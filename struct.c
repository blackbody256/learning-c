#include<stdio.h>
#include<string.h>
struct player{
    char name[10];
    int score;
};
int main(){
    //struct = a collection of related members or variables
    // they can be of different datatypes
    //they are listed under one name in a block of memory
    // they are very similar to classes in other languages (but donot have methods)
    struct player player1;
    struct player player2;
    strcpy(player1.name, "Black");//i use strcpy cause name is a string 
    player1.score= 80;
    player2.score=90;
    strcpy(player2.name, "body");
    printf("%s has %d marks\n %s has %d marks\n\n\n", player1.name, player1.score, player2.name, player2.score);
}