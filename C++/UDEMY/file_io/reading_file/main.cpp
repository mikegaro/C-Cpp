/*

    std::ifstream in_file

*/
#include<iostream>
#include<fstream>

int main( ) {

    std::ifstream in_file;
    std::string line;
    int num;
    double total;



    in_file.open( "test.txt" );
    if ( !in_file ) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::cout << "File is good to go" << std::endl;

    in_file >> line;
    std::cout << line << std::endl;
    in_file.close( );
    return 0;

    return 0;
}

