#include <stdio.h>
int main(){
    double prices[]={5.0,10.0,15.0,25.0,20.0, 25.0};
    //if we use "5" we need to update it when ever we update the array elements,
    //so we use size of the array but the size of the array is in bytes
    //,so we divide the size of the array by the size of the element
    for (int i = 0;i<sizeof(prices)/sizeof(prices[0]);i++){
        printf("%.2lf\n", prices[i]);
    }
    return 0;
}