#include <iostream>

#include "fileReader.h"

int main()
{
    std::cout << "Hi! it's 1st version of ascii generator!\n";
    fileReader reader;
    reader.read("../smile.bmp");
    std::cout << reader.len() << std::endl;
    std::cout.write(reader.content(), reader.len());
}