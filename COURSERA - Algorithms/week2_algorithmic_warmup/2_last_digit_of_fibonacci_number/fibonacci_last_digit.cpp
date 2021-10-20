#include <iostream>

int get_fibonacci_last_digit_fast( int n ) {
    int fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for ( int i = 2; i <= 60; i++ ) {
        fib[i] = ( fib[i - 1] + fib[i - 2] ) % 10;
    }
    return fib[n % 60];
}

int main( ) {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast( n );
    std::cout << c << '\n';
}
