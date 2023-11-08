#include <stdio.h>
int main(){
    //continue skips rest of the code and forces the next iteration of the loop
    //break exits a loop/switch
    for(int i =1;i<=20;i++){
        if (i==13){
            continue;//this just skips number 13
            //break;//while this stops at number 13
        }
        printf("%d\n", i);
    }
    return 0;
}