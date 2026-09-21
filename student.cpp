#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string Name;
    int RollNo;
    long long MobileNo;
    string EmailId;

public:
    Student()
    {
        Name = "Aesha Khanapara";
        RollNo = 13;
        MobileNo = 8141436006LL;
        EmailId = "aesha@gmail.com";
    }

    Student(string N, int RN, long long MN, string EI)
    {
        Name = N;
        RollNo = RN;
        MobileNo = MN;
        EmailId = EI;
    }

    void display()
    {
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Mobile No: " << MobileNo << endl;
        cout << "EmailId: " << EmailId << endl;
        cout<<"---------------------------"<<endl;
    }
};

int main()
{
    Student student1;

    Student student2(
        "Isha Patel",
        16,
        2640907878LL,
        "ishapatel@gmail.com"
    );

    cout << "First Student Details:" << endl;
    student1.display();

    cout << "Second Student Details:" << endl;
    student2.display();

    return 0;
}
