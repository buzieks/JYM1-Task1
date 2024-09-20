#include <iostream>
#include "student.h"
#include "degree.h"

Student::Student(std::string studentID, std::string firstName, std::string lastName, std::string email, int age, int days1, int days2, int days3, DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    daysToCompletion[0] = days1;
    daysToCompletion[1] = days2;
    daysToCompletion[2] = days3;
    this->degreeProgram = degreeProgram;
}
    // Getters
    std::string Student::getStudentID() { return studentID; }
    std::string Student::getFirstName() { return firstName; }
    std::string Student::getLastName() { return lastName; }
    std::string Student::getEmail() { return email; }
    int Student::getAge() { return age; }
    int* Student::getDaysToCompletion() { return daysToCompletion; }
    DegreeProgram Student::getDegreeProgram() { return degreeProgram; }

    // Setters
    void Student::setStudentID(std::string studentID) { this->studentID = studentID; }
    void Student::setFirstName(std::string firstName) { this->firstName = firstName; }
    void Student::setLastName(std::string lastName) { this->lastName = lastName; }
    void Student::setEmail(std::string email) { this->email = email; }
    void Student::setAge(int age) { this->age = age; }
    void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }
    void Student::setDaysToCompletion(int days[3]) {
        for (int i = 0; i < 3; i++) {
            daysToCompletion[i] = days[i];
        }
    
}
void Student::print() {
    std::cout << "Student ID: " << studentID << std::endl;
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Days to Complete Courses: " << daysToCompletion[0] << ", " << daysToCompletion[1] << ", " << daysToCompletion[2] << std::endl;
    std::cout << "Degree Program: ";
    switch (degreeProgram) {
        case 0:
            std::cout << "Security";
            break;
        case 1:
            std::cout << "Networking";
            break;
        case 2:
            std::cout << "Software";
            break;
        default:
            std::cout << "Invalid Degree Program";
            break;
    }
}