#include <iostream>
#include <vector>

int main() {
    int length;
    std::cout << "Enter the length of the vectors: ";
    std::cin >> length;

    // Declare two vectors of length 'length'
    std::vector<int> vector1(length);
    std::vector<int> vector2(length);

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

    // Calculate the dot product of both vectors
    int dot_product = 0;
    for (int i = 0; i < length; ++i) {
        dot_product += vector1[i] * vector2[i];
    }

    // Display the dot product
    std::cout << "The dot product of the two vectors is: " << dot_product << std::endl;

    return 0;
}