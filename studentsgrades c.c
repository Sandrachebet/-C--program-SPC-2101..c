/*
Name: SANDRAH CHEBET 
RegNo: PA106/G/28741/25
Description: A program that reads student's name, registration number, and total marks from a binary file and displays it on the screen.
Date: 6/11/2025
*/

#include <stdio.h>
#include <stdlib.h>
//define a structure to hold student data
struct Student {
    char name[70];
    char regNo[30];
    int total_Marks;
};
FILE *fptr;
//main function
int main(){
    struct Student student;
    //open the binary file in read mode
    fptr = fopen("results.dat", "rb");
    if(fptr == NULL){
        perror("Error");
        return 1;
    }
    //read student data from the file
    printf("Student Details:\n");
    while(fread(&student, sizeof(struct Student), 1, fptr)){
        printf("Name: %s", student.name);
        printf("Registration Number: %s", student.regNo);
        printf("Total Marks: %d\n", student.total_Marks);
        printf("-------------------------\n");
    }
    //close the file
    fclose(fptr);
    return 0;
}