#include <stdio.h>
#include <math.h>
int main(){
    double A= sqrt(9);//this finds the square root of 9
    double B= pow(2,4);//rises a base to a power. note the first number is the base
    int C= round(3.14);//this rounds off the figures
    int D= ceil(3.14);//rounds the number up
    int E= floor(3.99);//rounds the number down
    double F=fabs(-10);//it finds how far is a number from zero
    double G= log(78);
    double H= sin(45);
    double I= cos(45);
    double J= tan(45);
    printf("a %f\n", A);
    printf("b %f\n", B);
    printf("c %d\n", C);
    printf("d %d\n", D);
    printf("e %d\n", E);
    printf("f %d\n", F);
    printf("g %f\n", G);
    printf("h %f\n", H);
    printf("i %f\n", I);
    printf("j %f\n", J);

    return 0;
}
