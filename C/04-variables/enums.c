/*
    Enums
    
    A data type that allows a programmer to define a variable and specify the valid values that could be stored into that variable
    
    - Iniated by the keyword enum
    - The the name of the enumarated data type
    - The list the identifiers that define the permisible values that can be assigned to the type


    enum primaryColor {red, yellow, blue};

    - To declare a variable to be of type enum

    enum primaryColor mycolor, mikeColor;

    - Defines the two variables myColor and gregsColor to be of type primaryColor
    - The only permisible values that can be assigned to these variables are the names red, yellow and blue

    myColor = red;

*/

#include <stdio.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, AMAZON, ORACLE};

    enum Company oracle = ORACLE;
    enum Company google = GOOGLE;
    enum Company social = FACEBOOK;

    printf("The value of xerox is: %d\n", oracle);
    printf("The value of google is: %d\n", google);

    return 0;    
}