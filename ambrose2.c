#include <stdio.h>
int main(){
    //int b = 1;
   /* while(b<5){
            if(b==1){
            printf("*\n");}
            if(b==2){
                printf("*   *\n");}
            if(b==3){
                printf("*   *   *\n");}
            if(b==4){
                printf("*   *   *   *\n");}
            b = b+1;
            }
    b =1;
    while(b<5){
            if(b==1){
            printf("*   *   *\n");}
            if(b==2){
                printf("*   *\n");}
            if(b==3){
                printf("*   *   *\n");}
            if(b==4){
                printf("*   *   *   *\n");
                b = b - 1;}
            b=b+1;
            }*/
   int b;

   for(b=1;b<5;b++){
       if(b==1){
           printf("*\n");}
       if(b==2){
           printf("*   *\n");}
       if(b==3){
           printf("*   *   *\n");}
       if(b==4){
           printf("*   *   *   *\n");}

   }
   for(b=4;b>0;b--){
       if(b==1){
           printf("*\n");}
       if(b==2){
           printf("*   *\n");}
       if(b==3){
           printf("*   *   *\n");}
   }
    return 0;
}