/*

    REDEFINIR LOS METODOS DE LA CLASE
    Static binding of method calls
    Binding es estatico en C++ por defecto
    Derived class objects will use Derived::depositar
    PERO, PODEMOS INVOCAR  EXPLICITAMENTE A BASE::depositar DESDE Derived::depositar

    ESTA APROXIMACION ESTA BIEN, PERO ES LIMITADA. UN METODO MAS PODEROSO ES EL
    dynamic binding EL CUAL VEREMOS EN LA SECCION DE POLIMORFISMO


*/

#include "Cuenta_Ahorros.h"
#include<iostream>

using namespace std;

int main( ) {

    cout << "\n=========== ACCOUNT CLASS ==============" << endl;
    Cuenta a1{ 1000.0 };
    cout << a1 << endl;

    a1.depositar( 500.0 );
    cout << a1 << endl;

    a1.retirar( 5000.0 );
    cout << a1 << endl;

    cout << "\n =========== CUENTA AHORROS ============" << endl;

    Cuenta_Ahorros s1{ 1000,5.0 };
    cout << s1 << endl;

    s1.depositar( 1000 );
    cout << s1 << endl;

    s1.retirar( 2000 );
    cout << s1 << endl;

    return 0;

}