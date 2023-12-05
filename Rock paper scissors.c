#include <stdio.h>
#include<time.h>
#include<stdlib.h>
//To use rand to generate random numbers, I had to include the time header but
//time header does not work alone but with the standard library
//enum is a user defined type of named integer identifiers
//helps to make a program more readable
enum option{Rock, Paper, Scissors,Quit};
//Note Originally Rock=0, Paper=1 and Scissors=2 but if i want i can assign them
//Forexample enum option{Rock = 1, Paper = 2, Scissors =3 ....}
//I use enums to make my program more readable and understandable instead of using numbers like 0,1,2and 31


int main(){
    srand(time(NULL));//srand(time(0))
    //this is known as the seed random number generator
    //I used NULL to represent that the number is generated in real time but can also use 0
    int User_choice;
    int Comp_choice;
    char list[][10]={"Rock","Paper","Scissors"};
    do{
        printf("Enter your choice:\n0.Rock\n1.Paper\n2.Scissors\n3.Quit and stop playing\nNote the input should only be 0,1,2 and 3\n");
        scanf("%d", &User_choice);
        printf("Your choice is %s\n", list[User_choice]);
        Comp_choice= rand()%3;//note I put "% 3 because I want random numbers from 0 inclusive to 3 exclusive
        //but if i want to change my lower boundary like from 0 to 1, i would just have added one forexample
        //Comp_choice= (rand()%3) +1;

        printf("The computer's choice is %s\n", list[Comp_choice]);


        if(Comp_choice==User_choice){
            printf("It's a draw.\nTry again");
        }else if(Comp_choice==Rock && User_choice==Paper){
            printf("You win\nPaper wraps rock");
        }else if(Comp_choice==Paper && User_choice==Rock){
            printf("Computer wins\nPaper wraps rock");
        }else if(Comp_choice==Paper && User_choice==Scissors) {
            printf("You win\nScissors cut Paper");
        }else if(Comp_choice==Scissors&& User_choice==Paper) {
            printf("Computer wins\nScissors cut Paper");
        }else if(Comp_choice==Scissors && User_choice==Rock) {
            printf("You win\nRock bangs Scissors");
        }else if(Comp_choice==Rock && User_choice==Rock) {
            printf("Computer wins\nRock Bangs Scissors");
        }else if(User_choice==Quit){
            printf("Thank you for playing\nGoodbye darling");
        }else{
            printf("Do not be bogus Read the instructions please");
            break;
        }
        printf("\n\n\n****************************************\n\n\n");
    } while (User_choice!= Quit);
}