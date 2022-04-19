/*

    LAMBDA EXPRESSION CON CAPTURE LIST
    [capture list] (arguments) -> return_type specifiers { };

    int y{10};
    auto l = [y] (int x) {std::cout << x;};

    -> All variables captured by value are captured by const value
    -> This implies that y cannot be modified
*/