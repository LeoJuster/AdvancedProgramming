#include <iostream>
#include <string>
#include <vector>

// Base class representing a Person with basic attributes
class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& _name, int _age) : name(_name), age(_age) {}

    // Pure virtual function for displaying person's information
    virtual void displayInfo() const = 0;

    // Encapsulation: Getter for name
    std::string getName() const {
        return name;
    }
};
