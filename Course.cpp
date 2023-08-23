// Class representing a Course
class Course {
private:
    std::string courseName;

public:
    Course(const std::string& _courseName) : courseName(_courseName) {}
};

// Class representing a School
class School {
private:
    std::string schoolName;
    std::vector<const Teacher*> teachers;

public:
    School(const std::string& _schoolName) : schoolName(_schoolName) {}

    // Static Members: Count the number of teachers in the school
    static int teacherCount;

    // Add teacher to the school's list
    void addTeacher(const Teacher* teacher) {
        teachers.push_back(teacher);
        teacherCount++;
    }

    // Display teachers' information using function pointers
    void displayTeachersInfo(void (Teacher::*func)() const) const {
        std::cout << "Teachers in " << schoolName << ":" << std::endl;
        for (const Teacher* teacher : teachers) {
            (teacher->*func)(); // Polymorphic behavior
        }
    }
};

// Initialize static member
int School::teacherCount = 0;
