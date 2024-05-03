#include <iostream>

int main()
{
    std::cout << "Números impares en orden descendente entre 1 y 100:\n";

    for (int i = 100; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            std::cout << i << " ";
        }
    }

    return 0;
}
