#include <iostream>
#include <cstdlib>
#include <algorithm>

int main() {
    int Num_Students;

    std::cout << "Enter the number of students: ";  //entering the number of students
    std::cin >> Num_Students;

    std::string Names[Num_Students];
    int Grades[Num_Students];

    for (int i = 0; i < Num_Students; ++i) {  //collecting the data of students
        std::cout << "Enter student name: ";
        std::cin >> Names[i];

        std::cout << "Enter student grade: ";
        std::cin >> Grades[i];
    }

    int Total_Grades = 0.0;
    for (int i = 0; i < Num_Students; ++i) {  //summing total grades of students
        Total_Grades += Grades[i];
    }

    int Average_Grade = Total_Grades / Num_Students;

    int Highest_Grade = *std::max_element(Grades, Grades + Num_Students);
    int Lowest_Grade = *std::min_element(Grades, Grades + Num_Students);

    std::cout << "\nAverage grade = " << Average_Grade << std::endl;
    std::cout << "Highest grade = " << Highest_Grade << std::endl;
    std::cout << "Lowest grade = " << Lowest_Grade << std::endl;

    return 0;
}
