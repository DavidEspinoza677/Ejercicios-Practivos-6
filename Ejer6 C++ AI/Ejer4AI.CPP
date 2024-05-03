#include <iostream>

int main() {
    const int num_students = 10;
    double grades[num_students];
    double sum = 0.0;

    // Prompt the user to enter the grades for each student
    std::cout << "Enter the grades for each of the " << num_students << " students:" << std::endl;
    for (int i = 0; i < num_students; ++i) {
        std::cout << "Student " << i + 1 << ": ";
        std::cin >> grades[i];
        sum += grades[i];
    }

    // Calculate the general average
    double average = sum / num_students;

    // Output the general average
    std::cout << "The general average of the section is: " << average << std::endl;

    return 0;
}