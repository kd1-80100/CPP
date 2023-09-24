#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate()
    {
        this->day=16;
        this->month=12;
        this->year=1995;
    }
    void acceptDateFromConsole()
    {
        cout<<"Enter the day:";
        cin>>this->day;
        cout<<"Enter the month:";
        cin>>this->month;
        cout<<"Enter the year:";
        cin>>this->year;
    }
    void printDateOnConsole()
    {
        cout<<"The date is= "<< this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }
    bool isLeapYear()
    {
        if((year%4==0)&&(year%100!=0)||(year%400==0))
        {
            cout<<year<<" is a leap year."<<endl;
            return true;
        }
    else
        {
        cout<<year<<" is not a leap year."<<endl;
        return false;
        }
    }
};
int main()
{
    struct Date d,a;
    int choice;
    do
    {
        cout<<"Enter the choice: \nPress 0 to exit.\nPress 1 to display default date.\nPress 2 to input and display date\n";
        cin>>choice;
        switch (choice)
        {
            case 1:
            d.initDate();
            d.isLeapYear();
            d.printDateOnConsole();
            break;
            case 2:
            d.acceptDateFromConsole();
            d.printDateOnConsole();
            d.isLeapYear();
            default:
            break;
        }
    } while (choice!=0);   
}