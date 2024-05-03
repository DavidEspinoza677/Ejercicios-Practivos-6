#include <iostream>

int main() {
    const int num_students = 8;
    double grades[num_students];
    int approved = 0;
    int failed = 0;
    double sum = 0.0;

    // Prompt the user to enter the grades for each student
    std::cout << "Enter the grades for each of the " << num_students << " students:" << std::endl;
    for (int i = 0; i < num_students; ++i) {
        std::cout << "Student " << i + 1 << ": ";
        std::cin >> grades[i];
        sum += grades[i];
        if (grades[i] >= 60) {
            approved++;
        } else {
            failed++;
        }
    }

    // Calculate the group average
    double average = sum / num_students;

    // Output the results
    std::cout << "Number of approved students: " << approved << std::endl;
    std::cout << "Number of failed students: " << failed << std::endl;
    std::cout << "Group average: " << average << std::endl;

    return 0;
}