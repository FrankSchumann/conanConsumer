#include <iostream>

#include <hello.h>

#include "config.h"

int main()
{
    std::cout << "consumer" << std::endl;

    std::cout << "version: " << APPLICATION_VERSION << std::endl;
}
