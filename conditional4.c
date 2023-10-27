#include <stdio.h>
int main(){
    int x;
    int zero_count;
    int minus_count;
    int plus_count;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of zero count: ");
    scanf("%d", &zero_count);
    printf("Enter the value of plus count: ");
    scanf("%d", &plus_count);
    printf("Enter the value of minus count: j");
    scanf("%d", &minus_count);
    if (x == 0){
        zero_count+=1;
    }else if(x<0){
        minus_count= minus_count+ x;
    }else{
        plus_count=plus_count + x;
    }
    printf("zero count: %d\nplus count: %d\nminus count: %d\n", zero_count, plus_count, minus_count);
    
    return 0;
}