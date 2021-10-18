/*

    this es una palabra reservada
    contiene el address del objeto -> asi que es un pointer to the obect
    solo puede usarse dentro del scope de la clase
    Para accesar a cualquier miembro de la clase se utiliza this

    Puede usarse para:
        -> Accesar data members y metodos
        -> Determinar si dos objetos son lo mismo
        -> Puede ser dereferenced (*this)


    void Account::set_balance(double bal) {
        balance = bal; // this->balance esta implicito al hacer esta operacion
    }

    void Account::set_balance(double balance) {
        balance = balance; // -> Espera, cual balance te refieres?
    }

    void Account::set_balance(double balance) {
        this->balance = balance; // -> Esto es mejor y menos ambiguo;
    }

*/