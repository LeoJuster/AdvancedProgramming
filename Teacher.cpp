// Derived class representing a Teacher
class Teacher : public Person {
private:
    std::string subject;

public:
    Teacher(const std::string& _name, int _age, const std::string& _subject)
        : Person(_name, _age), subject(_subject) {}

    // Implementation of the displayInfo function for Teacher
    void displayInfo() const override {
        std::cout << "Teacher: " << name << ", Age: " << age << ", Subject: " << subject << std::endl;
    }

    // Friendship: Allow School class to access private member
    friend class School;
};
