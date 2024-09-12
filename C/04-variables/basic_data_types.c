/*
    Basic Data Types

    C supports many different types of variables and each type of variable is used for storing kind of data 
    The difference between the types is in the amount of memory they occupy and the range of values they can hold
    
    - The amount of storage that is allocated to store a particular type of data
    - Depends on the computer you are running (machine-dependent)
    - An integer might take up to 32 bits (4 bytes), or perhaps 64

*/

#include <stdbool.h>

int main()
{
    float jason = 23.333;
    double jason2 = 55.55555;
    
    /* Defined in stdbool.h*/
    bool myBoolean = true;
    bool another_bool = false;    
    return 0;
}
