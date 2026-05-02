#ifndef BMPPARSER_H
#define BMPPARSER_H

#include "bmpHeader.h"

class bmpParser
{
public:
    void parse(const char* data, size_t size);
private:
    bmpHeader header_;
};


#endif