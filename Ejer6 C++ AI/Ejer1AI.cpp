#include <iostream>

int main() {
    int n;
    int sum = 0;

    // Prompt the user to enter a natural number
    std::cout << "Enter a natural number: ";
    std::cin >> n;

    // Calculate the sum of the natural numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Display the result
    std::cout << "The sum of the natural numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}