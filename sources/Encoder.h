#pragma once
#include <vector>
#include <iostream>

class Encoder
{
public:
    template <class T>
    void func(const std::vector<T> &val)
    {
        std::cout << "vector<T> ver" << std::endl;
    };

    template <class T>
    void func(const T &val)
    {
        std::cout << "T ver" << std::endl;
    }
};