// Derived class representing a Student
class Student : public Person {
private:
    int studentID;

public:
    Student(const std::string& _name, int _age, int _studentID)
        : Person(_name, _age), studentID(_studentID) {}

    // Implementation of the displayInfo function for Student
    void displayInfo() const override {
        std::cout << "Student: " << name << ", Age: " << age << ", Student ID: " << studentID << std::endl;
    }
};
