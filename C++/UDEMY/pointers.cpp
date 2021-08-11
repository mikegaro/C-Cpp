#include <iostream>
using namespace std;

void double_data(int *entero_ptr);

int main()
{
    //-----------------------------------------
    //Asi se crean los pointers
    int score{100};
    int *score_ptr{&score};
    cout << *score_ptr << endl;
    *score_ptr = 200;

    //----------------------------------------
    //DINAMIC MEMORY ALLOCATION
    int *array_ptr{nullptr};
    array_ptr = new int[10];
    //En C usamos malloc y calloc. En C++ usamos new y delete
    delete[] array_ptr;

    cout << *score_ptr << endl;
    cout << score << endl;
    cout << endl;

    //----------------------------------------
    //ARRAYS Y APUNTADORES - COMO SE RELACIONAN
    cout << "ARRAYS Y APUNTADORES -> RELACION" << endl;
    int puntajes[]{100, 95, 80};

    int *puntaje_ptr{puntajes};
    cout << puntaje_ptr << endl;
    cout << *(puntaje_ptr + 1) << endl;
    cout << *(puntaje_ptr + 2) << endl;

    //Tambien funciona llamando simplemente al apuntador con brackets
    puntaje_ptr[1] = 1;
    cout << puntaje_ptr[1] << endl;
    cout << endl;

    // ARITMETICA DE APUNTADORES
    cout << "--------> ARITMETICA DE APUNTADORES" << endl;

    string s1{"Frank"};
    string s2{"Frank"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << (p1 == p2) << endl;   //False
    cout << (p1 == p3) << endl;   //True
    cout << (*p1 == *p3) << endl; //True
    cout << (*p1 == *p2) << endl; //True

    int resultados[]{100, 95, 89, 68, -1};
    int *resultados_ptr{resultados};

    while (*resultados_ptr != -1)
    {
        cout << *resultados_ptr << endl;
        resultados_ptr++;
        //AHORA score_ptr APUNTA AL SIGUIENTE ELEMENTO
    }
    resultados_ptr = resultados;
    //SI QUIERO MODIFICAR EL ELEMENTO Y NO EL APUNTADOR
    while (*resultados_ptr != -1)
    {
        cout << (*resultados_ptr)++ << endl;
        resultados_ptr++;
    }
    cout << endl;

    //APUNTADORES A CONSTANTES Y APUNTADORES A

    int puntaje_mas_alto{100};
    int puntaje_mas_bajo{50};

    //Este apuntador puede cambiar y apuntar a otra cosa
    const int *apuntador_score{&puntaje_mas_alto};
    //El apuntador si puede cambiar pero el valor de lo que
    //apunta no puede cambiar

    //Para este apuntador si puede cambiar el valor de lo que
    //apunta
    int *const otro_score{&puntaje_mas_alto};
    //Lo que no puede hacer es cambiar el valor de la direccion
    //La direccion es constante

    //El valor a lo que apunta no puede cambiar
    const int *const locked_score{&puntaje_mas_bajo};
    //La direccion tampoco puede cambiar

    double_data(&puntaje_mas_alto);

    cout << puntaje_mas_alto << endl;

    return 0;
}

void double_data(int *entero_ptr)
{
    *entero_ptr *= 2;
}