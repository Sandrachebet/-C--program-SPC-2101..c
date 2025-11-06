/*
Name: SANDRAH CHEBET 
RegNo: PA106/G/28741/25
Description: A program create a file and write books that have been borrowed from a library.
Date: 2/11/2024
*/

#include <stdio.h>
#include <stdlib.h>

FILE *fptr;
//main function
int main(){
    char bookTitle[80];
    
    //open file in write mode
    fptr = fopen("borrowed_books.txt", "a");
    if(fptr == NULL){
        perror("Error");
            return 1;
        }
    //get book titles from user and write to file
    printf("Enter the titles of book borrowed:\n");
    fgets(bookTitle, sizeof(bookTitle), stdin);
    fprintf(fptr, "%s", bookTitle);
    //close the file
    fclose(fptr);

    //display success message
    printf("The book titles have been recorded successfully.\n");


    return 0;
}