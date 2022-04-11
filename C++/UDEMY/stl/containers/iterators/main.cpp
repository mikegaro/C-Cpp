/*

    ITERATORS

    --> Allows abstracting an arbitrary container as a sequence of elements.
    --> They are objects that work like pointers by design
    --> Most containers classes can be traversed with iterators
    --> Se tienen que declarar con base en el tipo de contenedor donde van a iterar

    std::vector<int>::iterator it1;
    std::set<char>::iterator it4;

    BEGIN AND END

      * -> vec.begin()
    | 1 | 2 | 3 |   |
                  * -> vec.end()

    -> Begin apunta al primer elemento
    -> End apunta al ultimo elemento

    REVERSE ITERATORS

    -> El ultimo elemento es el primero y el primer elemento es el ultimo
    -> ++ se mueve de reversa, mientras que -- se mueve hacia adelante

*/