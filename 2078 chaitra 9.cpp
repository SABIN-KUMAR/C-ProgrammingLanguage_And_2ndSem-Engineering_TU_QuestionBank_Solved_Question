#include <iostream>

template <typename T, typename U>
void print(T arg1)
{
    std::cout << arg1 << std::endl;
}

int main()
{
    print<int, char>(42);
    return 0;
}

