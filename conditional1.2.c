#include <stdio.h>
#include <stdlib.h> // Include necessary libraries

int main() {
    float total_purchase; // Represents the total purchase
    int are_u_teacher; // Variable to check if the user is a teacher
    float price, tax, final_total;/*price represents the amount after discounts
    tax represents the amount levied as sales tax
    final_amount represents  the amout after discounts and taxes*/ 

    printf("Enter the total purchase:\n");
    scanf("%f", &total_purchase);

    printf("Are you a teacher?\nIf yes type 1\nIf No type 0\n");
    scanf("%d", &are_u_teacher);

    if (are_u_teacher == 1) {
        if (total_purchase > 100) {
            price = total_purchase * 0.88;
        } else {
            price = total_purchase * 0.9;
        }
    } else if (are_u_teacher == 0) {
        price = total_purchase;
    } else {
        printf("Enter either 0 or 1 for being a teacher.\n");
        return 1; // Terminate the program if the input is invalid
    }

    tax = price * 0.05;
    final_total = price + tax;

    // Print the details of the purchase
    printf("The total purchase = $%.2f\nThe tax levied = $%.2f\nThe final price = $%.2f\n", total_purchase, tax, final_total);

    // Open a file to write the receipt with the FIlE*file function
    FILE *file = fopen("receipt.txt", "w");//"w" represents the write mode
    if (file != NULL) {//this checks if opening of the file was successful
        fprintf(file, "The Shopping Receipt\n");//"fprintf" is the function used to print in the open file of recipt.txt
        fprintf(file, "Purchase Total: $%.2f\n", total_purchase);
        fprintf(file, "Discount: $%.2f\n", total_purchase - price);
        fprintf(file, "The sales tax: $%.2f\n", tax);
        fprintf(file, "Total Amount: $%.2f\n", final_total);
        fprintf(file, "Thank you for shopping with us\n");
        fclose(file); // Close the file after writing
    } else {
        printf("Error creating the receipt file.\n");
        return 1; // Terminate if file creation fails
    }

    // Open the created receipt file in Notepad using the function "system" function 
    system("start notepad receipt.txt");
    

    return 0;
}