#include<iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
}d;
void initDate()
{
    d.day=16;
    d.month=12;
    d.year=1995;
}
void acceptDateFromConsole()
{
    cout<<"Enter the day:";
    cin>>d.day;
    cout<<"Enter the month:";
    cin>>d.month;
    cout<<"Enter the year:";
    cin>>d.year;
}
void printDateOnConsole()
{
    cout<<"The date is= "<< d.day<<"/"<<d.month<<"/"<<d.year<<endl;
}
bool isLeapYear()
{
    if((d.year % 4 == 0 && d.year % 100 == 0)||(d.year == 400))
    {
        cout<<d.year<<" is a leap year."<<endl;
        return true;
    }
    else
    {
        cout<<d.year<<" is not a leap year."<<endl;
        return false;
    }
}
int main()
{
    Date d;
    int choice;
    do
    {
        cout<<"Enter the choice: \nPress 0 to exit.\nPress 1 to display default date.\nPress 2 to input and display date\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
        initDate();
        printDateOnConsole();
        isLeapYear();
        break;
        case 2:
        acceptDateFromConsole();
        printDateOnConsole();
        isLeapYear();
        break;
        }
    } while (choice!=0);
    
    return 0;
}