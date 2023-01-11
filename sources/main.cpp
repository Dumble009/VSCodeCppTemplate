// ----------STLのinclude----------
#include <iostream> // 入出力
#include <vector>

template <class T>
void func(const T &val)
{
    std::cout << "val ver" << std::endl;
}

template <class T>
void func(const std::vector<T> &val)
{
    std::cout << "vector ver" << std::endl;
}

template <>
void func(const float &val)
{
    std::cout << "float ver" << std::endl;
}

int main(void)
{
    float a = 0;
    std::vector<float> b{};
    int i = 0;
    func(a);
    func(b);
    func(i);
    std::cout << "Hello World" << std::endl;
}