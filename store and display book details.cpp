#include <iostream>
using namespace std;

class Book
{
private:
    int book_id;
    string title;
    string author;

public:
    // Function to input book details
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> book_id;

        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author Name: ";
        cin >> author;
    }

    // Function to display book details
    void display()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book ID: " << book_id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main()
{
    Book b;

    b.input();
    b.display();

    return 0;
}
