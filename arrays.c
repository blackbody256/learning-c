#include <stdio.h>
int main(){
    //an array is a data type that can store many values of the same data type
    double prices[5]//={5.0,10.0,15.0,25.0,20.0};//this one of the was of intialising an array
    prices[0]=5.0;//or you can assign values to all index of the array
    prices[1]=10.0;
    prices[2]=15.0;
    prices[3]=25.0;
    prices[4]=20.0;//note:that the array indexes start at zero
    printf("%.2lf\n", prices[0]);
    //this is just a comment


}