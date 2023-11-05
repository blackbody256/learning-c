#include <stdio.h>
int main(){
    int shape;
    float area,radius,height,base,length,width,side;

    printf("1. Circle\n2. Triangle\n3. Rectangle\n4. Square\n");
    //I have chosen to use integers but u can use char if u want
    printf("Enter the shape of whose area you want to find from the objectives above\n");
    printf("Note: The answer should be 1,2,3 or 4 only\n");
    scanf("%d", &shape);
    //the switch is used to choose the suitable line of action according to the objective chosen
        switch(shape){
        case 1:
        printf("Enter the radius of the circle in meters:\n");
        scanf("%f", &radius);
        area = 3.1415*radius*radius;
        printf("The area of the circle is %f meters squared", area);
        break;

        case 2:
        printf("Enter the height of the triangle in meters:\n");
        scanf("%f", &height);
        printf("Enter the base length of the triangle in meters\n");
        scanf("%f", &base);
        area = 0.5 * height * base;
        printf("The area of the Triangle is %f meters squared", area);
        break;

        case 3:
        printf("Enter the length of the rectangle in meters:\n");
        scanf("%f", &length);
        printf("Enter the width of the square in meters");
        scanf("%f", &width);
        area = length * width;
        printf("The area of the rectangle is %f meters squared", area);
        break;

        case 4:
        printf("Enter the side of the square in meters:\n");
        scanf("%f", &side);
        area = side * side;
        printf("The area of the square is %f meters squared" , area);
        break;

        default:
        printf("For Heaven's sake, have some sense for today and read instructions");
        break;
    }

    return 0;
}