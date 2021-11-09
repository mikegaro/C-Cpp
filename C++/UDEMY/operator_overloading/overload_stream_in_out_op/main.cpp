#include "MyString.h"
#include<iostream>

using namespace std;

int main( ) {
    MyString larry{ "Larry" };
    MyString superman{ "superman" };
    MyString batman;

    cout << "Ingresa el nombre de batman: ";
    cin >> batman;

    cout << "Los superheroes son: " << superman << " " << batman << " " << larry << endl;

    return 0;
}