/*

    FORMATTING INTEGER TYPES

    -> Default when displaying integer values is:
        -> dec(base 10)
        -> noshowbase - prefix used to show hexadecimal or octal
        -> nouppercase - when displaying a prefix and hex values it will be lower case
        -> noshowpos - no '+' is displayed for positive numbers



*/
#include<iostream>

int main( ) {

    int num{ 255 };
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    std::cout << std::showbase; // -> MOSTRAR LA BASE EN LA QUE ESTÁ
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    std::cout << std::noshowbase; // -> NO MOSTRAR LA BASE EN LA QUE ESTÁ
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    std::cout << std::showbase << std::uppercase;
    std::cout << std::hex << num << std::endl;

    std::cout << std::endl;
    int num2{ -255 };
    std::cout << "Ahora para el signo" << std::endl;
    std::cout << std::showpos; // -> MOSTRAR EL SIGNO
    std::cout << num << std::endl;
    std::cout << num2 << std::endl;
    // -> Para no mostrar el signo es std::noshowpos

    return 0;
}