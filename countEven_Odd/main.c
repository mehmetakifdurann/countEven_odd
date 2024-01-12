// This is a 'C' program to count even and odd elements in the array
/*
 Example:
    Input array: 1 2 3 4 5 6 7 8 9
    Total even elements : 4
    Total odd elements :  5
 */

//Created by Mehmet Akif Duran. January 12, 2024

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000 //defining the max array size.

//funciton prototypes

int countEvens(int arr[], int);
int countOdds(int arr[], int);


int main(){ //beginning of the main function
    
    // variable decleration(s).
    
    int usersArray[MAX_SIZE];
    int usersSize;
    int count;
    
    // Executable statement(s).
    
    printf("Welcome this program counts even and odd elements in your array. \n");
    printf("Enter your array size : \n"); //getting users array size.
        scanf("%d", &usersSize);
    
    printf("Input the elements: \n");
    
    for(count=0; count<usersSize; count++)
        scanf("%d", &usersArray[count]); //putting the elements in to the array
    
    //funciton call(s).
    
    countEvens(usersArray, usersSize);
    countOdds(usersArray, usersSize);

    printf("! ! ! THE PROGRAM ENDS ! ! ! \n");
    
    return 0;
} // end of the main function.

//function definition for counting the even elements.

int countEvens(int arr[], int arrSize){
    
    //variable decleration(s).
    
    int evenNum=0; //this variable will count the even elements in the array
    int count;
    
    //Executable statment(s).
    
    for(count=0; count<arrSize; count++){
        if(arr[count] % 2 == 0)
            evenNum++;
    }
    
    printf("Total even elements :  %d\n", evenNum);
    
    return evenNum;
} //end of the function definition.


//function definition for counting the odd numbers.

int countOdds(int arr[], int arrSize){
    
    // variable decleration(s).
    int oddNum = 0; //this variable will count the odd elements in the array.
    int count;
    
    // executable statement(s).
    
    for(count = 0; count<arrSize;count++){
        if(arr[count] % 2 != 0)
            oddNum++;
    }
    
    printf("Total odd elements : %d\n", oddNum);
    
    return oddNum;
} // end of the function definition
