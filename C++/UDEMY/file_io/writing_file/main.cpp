/*

     Writing to a file

*/

#include<iostream>
#include<fstream>
#include<string>

int main( ) {

    std::ofstream out_file{ "output.txt" };
    if ( !out_file ) {
        std::cerr << "Error creating file" << std::endl;
        return 1;
    }
    std::string line;
    std::cout << "Enter something to wrtie to thye file: ";
    std::getline( std::cin, line );
    out_file << line << std::endl;
    return 0;
}