#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string name;
    float salary;

public:
    // Constructor
    Employee(int id, string n, float s)
    {
        emp_id = id;
        name = n;
        salary = s;
    }

    // Function to display employee details
    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e(101, "Rahul", 45000);

    e.display();

    return 0;
}
