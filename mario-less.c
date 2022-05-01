#include <cs50.h>     //Includes the module for cs50 functions namely get_int, while/for loops, comparison operators
#include <stdio.h>    //Includes the standard input output module

int main(void)      //Green flag click for C
{
    int height, row, column, space;    //Initialising different variables as integers for the compiler to notic
    do              //A function to keep on going until the parameters are met ie input should less than or equal to 8 and more than or equal to 1
    {
        height = get_int("Enter height here: ");  //inputting values for the height
    }
    while (height < 1 || height > 8);     //Parameters

    for (row = 0; row < height; row++)     //Main loop to put in punch in the row hashes
    {
        for (space = 0; space < height - row - 1; space++)   //Secondary loop to add spaces in the program, where the no of spaces is found by the
        {                                                 //equation height - row -1
            printf(" ");        //printting the spaces
        }
        for (column = 0; column <= row ; column++)       // loop for printing the columns of the hashes
        {
            printf("#");    //print the #
        }
        printf("\n"); //Move to next line
    }
}
