#include <stdio.h>
int main(void){
char gpa;
printf("A.gpa>4.4\nB.gpa>=4.0\nC.gpa>2\nD.gpa>1\nE.gpa<1\n");
printf("Which catergory does your gpa fall?\nThe answer be 1,2,3,4or5 only\n");
scanf(" %c", &gpa);
switch (gpa){
    case 'A':
    printf("Congs\nyou have a first class");
    break;
    case 'B':
    printf("congs\nyou have a second class upper");
    break;
    case 'C':
    printf("congs\nyou have a second class lower");
    break;
    case 'D':
    printf("Sorry\nyou have a pass degree");
    break;
    case 'E':
    printf("sorry\nyou have a sixth class deep");
    break;
    default:
        printf("Not be stupid Enter the right input");

}
    return 0;
}
