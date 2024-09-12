/*
  Reading input from the terminal

  The C library contains several input functions, and scanf() is the most general of them
    - Can read a variety of formats
    - Reads the input from the standard input stream stdin and scans that input according to the format provider
    - Format can be a simple constant string, but you can specify %s, %d %c, %d, %f, etc to read strings, integer, character or floats

  If the stdin is input from the keyboard then text is read because the keys generate text characters: letters, digits, and punctuation
    - When you enter the integer 2014, you type the characters 2 0 1 and 4
    - If you want to store that as a numerical value rather than as a string, you program has to convert the string character-by-character
      to a numerical value and this is the job of the scanf function.
*/

#include<stdio.h>

int main(int argc, char ** argv)
{
    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%d %s", &i, str);

    printf("\n You entered: %d %s\n", i, str);

    return 0;
}