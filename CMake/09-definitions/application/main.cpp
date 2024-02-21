#include <iostream>

#include <ServerProvider.h>

int main()
{
    std::cout << "Application version: " << APP_PROJECT_VERSION << std::endl;

    std::cout << "Connecting to " << ServerProvider::getHostName() << std::endl;

    return 0;
}
