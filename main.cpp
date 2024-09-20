#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"

int main() {
    Student student("A123", "John", "Doe", "john.doe@example.com", 20, 30, 25, 20, SOFTWARE);
    student.print();

}