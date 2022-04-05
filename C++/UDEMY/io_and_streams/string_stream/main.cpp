#include<iostream>
#include<ctime>

using namespace std;

void delay( int secs );

int main( ) {

    cout << endl;
    for ( int i = 0; i < 10; ++i ) {
        delay( 1 );
        cout << "\r Position: " << i;
    }

    return 0;
}

void delay( int secs ) {
    for ( int i = ( time( NULL ) + secs ); time( NULL ) != i; time( NULL ) );
}