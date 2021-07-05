#include <math.h>
#include <stdio.h>
#include <iostream>

int main()
{
    double numero{0};
    std::cout << "Ingresa un numero" << std::endl;
    std::cin >> numero;
    std::cout << "La raiz cuadrada es: " << sqrt(numero) << std::endl;

    if (remove("C:/Users/garci/github/C-Cpp/C++/UDEMY/functions.exe") != 0)
    {
        perror("Error deleting file!");
    }
    else
    {
        puts("File deleted succesfully!");
    }
    return 0;
}