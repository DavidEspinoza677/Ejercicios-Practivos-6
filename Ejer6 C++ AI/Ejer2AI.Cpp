#include <iostream>

int main() {
    for (int i = 99; i >= 1; i -= 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}