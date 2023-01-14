// ----------STLのinclude----------
#include <iostream> // 入出力
#include <vector>
#include "./Encoder.h"
#include "./EncodeExp.h"

int main(void)
{
    auto encoder = Encoder();

    int i = 0;
    std::vector<float> v{};
    float f = 0;

    encoder.func(i);
    encoder.func(v);
    encoder.func(f);

    std::cout << "Hello World" << std::endl;
}