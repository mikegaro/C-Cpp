#include <iostream>
using namespace std;

void double_data(int *entero_ptr);
int *largest_int(int *primero, int *segudo);
int *create_array(size_t size, int init_value);

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
    cout << endl;

    //FUNCIONES QUE REGRESAN POINTERS

    int i{100};
    int j{50};

    int *el_mas_grande{nullptr};
    el_mas_grande = largest_int(&i, &j);
    cout << *el_mas_grande << endl;

    //REGRESANDO DYNAMICALLY ALLOCATED MEMORY
    int *mi_arreglo;
    mi_arreglo = create_array(100, 20);
    delete[] mi_arreglo;

    /* 
    REFERENCIAS -> No son los mismos que los pointers ya que se declaran con & y 
    sirven similar a un acceso directo en una aplicacion de Windows

*/
    int numerito{100};
    int &referencia{numerito}; //Estas tambien se conocen como L-Value references

    numerito = 200; //Modificando el numero
    cout << numerito << endl;
    cout << referencia << endl;

    referencia = 300;
    cout << numerito << endl; //Modificando la referencia
    cout << referencia << endl;

    /*  L-VALUES,

    ->Un L-value tiene nombres y es addressable
    ->Un L-value es modificable si no es const  */

    int un_simple_x{100}; // un_simple_x es un l-value
    un_simple_x = 1000;
    un_simple_x = 1000 + 20;

    string un_smple_nombre; //un_simple_nombre es un l-value
    un_smple_nombre = "Frank";

    /*  R-VALUES

    ->Un R-value es un non-addressable
    ->Un R-value no es asignable
    ->Un R-value es un literal que siempre esta del lado derecho del =
    ->Un R-value es un temporal que esta hecho para ser no-modificable  */

    int otro_x{100};           //100 is an R-value
    int otro_y = otro_x + 200; //(otro_x +200) es un R-value

    string otro_name{"Frank"}; //"Frank" es un R-value
    int max_num = max(20, 30); //max(20,30) es un R-value

    return 0;
}

void double_data(int *entero_ptr)
{
    *entero_ptr *= 2;
}

int *largest_int(int *primero, int *segundo)
{
    if (*primero > *segundo)
    {
        return primero;
    }
    else
    {
        return segundo;
    }
}

//FUNCION QUE REGRESA DYNAMICALLY ALLOCATED MEMORY

int *create_array(size_t size, int init_value = 0)
{
    int *new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}
