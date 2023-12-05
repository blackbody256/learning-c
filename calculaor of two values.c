#include <stdio.h>
int main(){
char operator;
double First_Num;
double Second_Num;
printf("Enter the equation:\n");
printf("Note it has to be in form of \"first value operator second value.\"\n");
printf("operators allowed are \"-+*/\"\n");
scanf("%lf%c%lf", &First_Num, &operator, &Second_Num);
switch(operator){
    case '+' :
        printf("%.3f", First_Num+Second_Num);
        break;
    case '-' :
        printf("%.3f", First_Num-Second_Num);
        break;
    case '/' :
        printf("%.3f", First_Num/Second_Num);
        break;
    case '*' :
        printf("%.3f", First_Num*Second_Num);
        break;
    default:
        printf("The \"%c\" Entered is not supported", &operator);


}
return 0;}
