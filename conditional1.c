#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float total_purchase;//this represents the total purchase
    int are_u_teacher;//this is a variable stores
    float price;
    float tax;
    float final_total;
    printf("Enter the total purchase:\n");
    scanf("%f", &total_purchase);
    printf("Are you a teacher\?\nIf yes type 1\nIf No type 0\n");
    scanf("%d", &are_u_teacher);
    if (are_u_teacher==1 && total_purchase>100){
        price = total_purchase*0.88;
        }else if (are_u_teacher==1 && total_purchase<100){
            price= total_purchase * 0.9;
        }else if(are_u_teacher==0){
        price= total_purchase;
        }else{
            printf("not be stupid and read the instructions Enter\"0 or 1\"");
        }
    tax= price*0.05;
    final_total = price+tax;
    system("start notepad");

    printf("The total purchase = $%.2f\nThe tax levied = $%.2f\nThe final price = $%.2f", total_purchase, tax, final_total);



    return (0);
}