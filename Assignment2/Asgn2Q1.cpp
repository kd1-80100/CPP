#include <iostream>
using namespace std;
namespace Nstudent
{
    class Student
    {
    private:
        int rollno;
        string name;
        float marks;

    public:
        void initStudent()
        {
            rollno = 1;
            name = "Scott";
            marks = 77;
        }
        void acceptStudentFromConsole()
        {
            cout << "Enter the roll number:";
            cin >> this->rollno;
            cout << "Enter the name:";
            cin >> this->name;
            cout << "Enter the marks:";
            cin >> this->marks;
        }
        void printStudentOnConsole()
        {
            cout << "Student roll number: " << this->rollno << "\t";
            cout << "Student name: " << this->name << "\t";
            cout << "Student marks: " << this->marks << endl;
        }
    };
}
using namespace Nstudent;
int main()
{
    int choice;
    Student s1;
    do
    {
        cout << "Enter the choice:\nPress 0 to exit\nPress 1 to display default student details.\nPress 2 to add and display student details.\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s1.initStudent();
            s1.printStudentOnConsole();
            break;
        case 2:
            s1.acceptStudentFromConsole();
            s1.printStudentOnConsole();
        default:
            break;
        }
    } while (choice != 0);
    return 0;
}