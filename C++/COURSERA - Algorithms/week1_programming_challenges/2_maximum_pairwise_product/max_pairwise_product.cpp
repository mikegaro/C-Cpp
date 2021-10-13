#include <iostream>
#include <vector>
#include <algorithm>


//ESTE ES EL ALGORITMO QUE PROPORCIONAN LOS DEL CURSO
int MaxPairwiseProduct( const std::vector<int> & numbers ) {
    int max_product = 0;
    int n = numbers.size( );

    for ( int first = 0; first < n; ++first ) {
        for ( int second = first + 1; second < n; ++second ) {
            max_product = std::max( max_product,
                numbers[first] * numbers[second] );
        }
    }

    return max_product;
}


//ESTA ES MI SOLUCION
long long MiAlgoritmo( const std::vector<int> & numeros ) {
    long long a = -1, b = -1;
    size_t aux = -1;
    for ( size_t i = 0; i < numeros.size( );++i ) {
        if ( numeros[i] > a ) {
            a = numeros[i];
            aux = i;
        }
    }
    for ( size_t i = 0; i < numeros.size( );++i ) {
        if ( i != aux && numeros[i] > b ) {
            b = numeros[i];
        }
    }
    long long n = a * b;
    return n;
}

int main( ) {
    int n;
    std::cin >> n;
    std::vector<int> numbers( n );
    for ( int i = 0; i < n; ++i ) {
        std::cin >> numbers[i];
    }

    std::cout << MiAlgoritmo( numbers ) << "\n";
    return 0;
}
