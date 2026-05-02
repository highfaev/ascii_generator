#include "fileReader.h"

#include <iostream>

void fileReader::read(const char* file_path)
{
    std::ifstream file(file_path, std::ios::binary);
    if(file.is_open())
    {
        this->resize(&file);
        file.read(buffer_.get(), size_);
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }
}

void fileReader::resize(std::ifstream* file)
{
    file->seekg(0, std::ios::end);
    size_t size = file->tellg();
    file->seekg(0, std::ios::beg);
    

    size_ = size;
    buffer_ = std::make_unique<char[]>(size_);
}

const char* fileReader::content()
{
    return buffer_.get();
}

size_t fileReader::len()
{
    return size_;
}