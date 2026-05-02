#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <memory>

class fileReader{
    public:
    void read(const char* file_path);
    const char* content();
    size_t len();
    private:
    void resize(std::ifstream* file);
    std::unique_ptr<char[]> buffer_;
    size_t size_ = 0;
};

#endif