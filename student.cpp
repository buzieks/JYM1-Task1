#include <iostream>

class Student {
    private:
    
    int studentID;
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    int daysToCompletion[3];

    public:
    Student(int id, std::string first, std::string last, std::string em, int a, int dtc[3]) : studentID(id), firstName(first), lastName(last), email(em), age(a), daysToCompletion(dtc) {};

    

};