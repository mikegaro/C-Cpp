/*

     SHARED POINTER

     -> PROVIDES SHARED OWNERSHIP OF HEAP OBJECTS

    shared_ptr<T>
        -> Points to an object of type T on the heap
        -> It is not unique - there can many shared_ptr's pointing to the same
        object on the heap
        -> Establishes shared ownership relationship
        -> CAN be assigned and copied
        -> CAN be moved
        -> Doesn't support managing arrays by default.
        -> When the use count is zero, the managed object on the heap is destroyed

    METODOS
        -> use_count() nos regresa el numero de shared_ptr's que apuntan al objeto en
            el heap
        ->make_shared() es mas eficiente para crear el pointer

*/

