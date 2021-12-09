/*

    If an exception is thown but not caught in the current scope
    C++ tries to find a handler for the exception by unwinding the stack.

    -> Function in which the exception was not caught terminates
        and is removed from the call stack.

    -> If a try block was used to then catch blocks are checked for a match

    -> If not try block was used or the catch handler doesn't match
        stack unwinding occurs again

    -> If the stack s unwoung back to the main and no catch handler handles
        the exception the program terminates

*/
