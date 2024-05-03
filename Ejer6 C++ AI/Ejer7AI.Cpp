#include <iostream>
#include <vector>

int main() {
    int length;
    std::cout << "Enter the length of the vectors: ";
    std::cin >> length;

    // Declare two vectors of length 'length'
    std::vector<int> vector1(length);
    std::vector<int> vector2(length);
    std::vector<int> sum_vector(length);

    // Prompt the user to enter the elements of the first vector
    std::cout << "Enter the elements of the first vector:" << std::endl;
    for (int i = 0; i < length; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> vector1[i];
    }

    // Prompt the user to enter the elements of the second vector
    std::cout << "Enter the elements of the second vector:" << std::endl;
    for (int i = 0; i < length; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> vector2[i];
    }

    // Calculate the sum of both vectors
    for (int i = 0; i < length; ++i) {
        sum_vector[i] = vector1[i] + vector2[i];
    }

    // Display the sum vector
    std::cout << "The sum vector is: ";
    for (int i = 0; i < length; ++i) {
        std::cout << sum_vector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}