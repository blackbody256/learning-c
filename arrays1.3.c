#include <stdio.h>
int main(){
    //2c array is an array where each element is an entire array
    //it is useful if you need a matrix, grid, or table of data
    int numbers[2][3];//={{1,2,3},{4,5,6}};
    //it's optional to fill in the number of arrays elements but in this case its 2
    //but, it's a must to fill in the number of the elements in the array elements
    //you can also fill in the elements one by one
    numbers[0][0]=1;
    numbers[0][1]=2;
    numbers[0][2]=3;
    numbers[1][0]=4;
    numbers[1][1]=5;
    numbers[1][2]=6;
    //so print the elements of the array, nested for loops are needed
    //but letting the condition be i<=1 or j <=1 is fixed so everytime
    //new elements are introduced in the array, we have to update the condition
    //so, we introduce new variables that store the number of rows and columns automatically
    int rows=sizeof(numbers) / sizeof (numbers[1]);//to get  this i divided the size of the whole array of numbers
    //by the element array numbers[1] since it is equal to all other elements, but you can use an element
    // array ie 0,1or 3. i divided because the size is calculated in bytes so, I had to divide
    int columns=sizeof (numbers[0])/ sizeof (numbers[0][0]);
    //here i divided  the size of element array numbers[0] with the size of one of its elements

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d\t", numbers[i][j]);
        }
        printf("\n");
    }
}