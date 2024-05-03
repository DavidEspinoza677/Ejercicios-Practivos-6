#include <iostream>

int main() {
    int sum = 0;

    // Calculate the sum of the squares of the numbers from 1 to 100
    for (int i = 1; i <= 100; ++i) {
        sum += i * i;
    }

    // Display the result
    std::cout << "The sum of the squares of the numbers from 1 to 100 is: " << sum << std::endl;

    return 0;
}