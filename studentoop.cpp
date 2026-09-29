#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    float marks;

public:

    // Constructor
    Student(int roll_no, string name, float marks)
    {
        this->roll_no = roll_no;
        this->name = name;
        this->marks = marks;
    }

    // Display function
    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s(25, "Aesha", 92.5);

    s.display();

    return 0;
}
