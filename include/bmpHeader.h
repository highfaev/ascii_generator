#ifndef BMPHEADER_H
#define BMPHEADER_H

#include <string>
#include <cstdint>

struct bmpHeader
{
    char signature_[2];
    uint32_t fileSize;
    uint32_t reserved;
    uint32_t dataOffset;
};

#endif