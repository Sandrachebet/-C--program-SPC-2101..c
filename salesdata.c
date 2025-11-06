/*
Name:SANDRAH CHEBET
RegNo: PA106/G/2741/25
Description: A program that reads sales data from a file and calculates total sales.
Date: 6th October, 2025
*/

#include <stdio.h>
#include <stdlib.h>

FILE *fptr;
//main function
int main(){
    float Transaction, totalsales = 0.0;

    //open the file in read mode
    fptr = fopen("sales.txt.txt", "r");
    if(fptr == NULL){
        perror("Error");
        return 1;
    }
    //read sales data from the file and calculate total sales
    while(fscanf(fptr, "%f", &Transaction) != EOF){
        totalsales += Transaction;
    }
    //close the file
    fclose(fptr);
    //display total sales
    printf("Total Sales: %.2f\n", totalsales);
    return 0;
}
