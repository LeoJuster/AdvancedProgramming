#include <iostream>
#include <string>
#include <vector>

int main() {
    // Creating instances of classes
    Student student("Leo", 22, 21900080);
    Teacher teacher1("Mr. Smith", 35, "Software Engineering");
    Teacher teacher2("Mrs. Johnson", 40, "Computing");
    Course course("Software Engineering");
    School school("Buckinghamshire New University");

    // Creating pointers to functions for functional pointers
    void (Teacher::*displayFunc)() const = &Teacher::displayInfo;

    // Adding teachers to the school
    school.addTeacher(&teacher1);
    school.addTeacher(&teacher2);

    // Abstraction, Encapsulation, Inheritance, Polymorphic Behavior
    student.displayInfo();
    teacher1.displayInfo();

    // Friendship
    school.displayTeachersInfo(displayFunc);

    // Static Members
    std::cout << "Total teachers in school: " << School::teacherCount << std::endl;

    return 0;
}

