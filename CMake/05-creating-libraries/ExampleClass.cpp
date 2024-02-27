//
// Created by garci on 27/09/2023.
//
#include <iostream>
#include "ExampleClass.h"

void Test::getmember()
{
    std::cout << "The number is " << a << std::endl;
}

Test::Test(int a): a(a)
{

}
