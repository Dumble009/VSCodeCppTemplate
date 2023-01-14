#pragma once
#include "./Encoder.h"

template <>
void Encoder::func(const float &val)
{
    std::cout << "float ver" << std::endl;
}