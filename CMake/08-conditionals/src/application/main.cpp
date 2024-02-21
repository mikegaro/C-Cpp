#include <iostream>

#include <ServerProvider.h>
#include <Calculator.h>

int main()
{
    std::cout << "3 + 6 = " << Calculator::sum(3, 6) << std::endl;

    return 0;
}
