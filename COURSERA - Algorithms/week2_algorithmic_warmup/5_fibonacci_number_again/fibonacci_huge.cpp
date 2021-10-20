#include <iostream>

long long pisano( long long m ) {
    long long prev = 0;
    long long curr = 1;
    long long res = 0;

    for ( int i = 0; i < m * m; i++ ) {
        long long temp = 0;
        temp = curr;
        curr = ( prev + curr ) % m;
        prev = temp;

        if ( prev == 0 && curr == 1 )
            res = i + 1;
    }
    return res;
}


long long get_fibonacci_huge_fast( long long n, long long m ) {
    long long pisanoPeriod = pisano( m );

    n = n % pisanoPeriod;

    long long prev = 0;
    long long curr = 1;

    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;

    for ( int i = 0; i < n - 1; i++ ) {
        long long temp = 0;
        temp = curr;
        curr = ( prev + curr ) % m;
        prev = temp;
    }
    return curr % m;
}

int main( ) {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast( n, m ) << '\n';
}
