#include<iostream>
#include<vector>

using namespace std;

class MoveCopy {
    private:
    int * data;
    public:
    void set_data_value( int d ) { *data = d; }
    int get_data_value( ) { return *data; };
    MoveCopy( int d );
    MoveCopy( const MoveCopy & source );
    ~MoveCopy( );
};

MoveCopy::MoveCopy( int d ) {
    data = new int;
    *data = d;
    cout << "Constructor Normal" << endl;
}

MoveCopy::~MoveCopy( ) {
    delete data;
    cout << "Destructor..." << endl;
}

int main( ) {
    Vector<MoveCopy> vec;
    return 0;
}

