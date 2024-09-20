#include <iostream>
#include "degree.h"

class Student {
    private:
    
    // Instantiate Variables
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    int daysToCompletion[3];
    DegreeProgram degreeProgram;

    public:
    // Constructor
    Student(std::string studentID, std::string firstName, std::string lastName, std::string email, int age, int days1, int days2, int days3, DegreeProgram degreeProgram);

    // Getters
    std::string getStudentID();
    std::string getFirstName();
    std::string getLastName();
    std::string getEmail();
    int getAge();
    int *getDaysToCompletion();
    DegreeProgram getDegreeProgram();

    // Setters
    void setStudentID(std::string studentID);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setEmail(std::string email);
    void setAge(int age);
    void setDaysToCompletion(int days[3]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    // Print Method
    void print();




    

};