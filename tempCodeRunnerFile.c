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