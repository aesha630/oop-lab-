#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    float marks;

public:
    // Function to input student details
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_no;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
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
    Student s;

    s.input();
    s.display();

    return 0;
}
