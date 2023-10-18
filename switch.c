#include <stdio.h>
int main(void){
int gpa;
printf("1.gpa>4.4\n2.gpa>=4.0\n3.gpa>2\n4.gpa>1\n5.gpa<1\n");
printf("Which catergory does your gpa fall?\nThe answer be 1,2,3,4or5 only\n");
scanf("%d", &gpa);
switch (gpa){
    case 1:
    printf("Congs\nyou have a first class");
    break;
    case 2:
    printf("congs\nyou have a second class upper");
    break;
    case 3:
    printf("congs\nyou have a second class lower");
    break;
    case 4:
    printf("Sorry\nyou have a pass degree");
    break;
    case 5:
    printf("sorry\nyou have a sixth class deep");
    break;
    default:
        printf("Not be stupid Enter the right input");

}
    return 0;
}
