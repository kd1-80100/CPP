#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day=16;
    ptrDate->month=12;
    ptrDate->year=1995;
}
void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter the date:");
    scanf("%d",&ptrDate->day);
    printf("Enter the month:");
    scanf("%d",&ptrDate->month);
    printf("Enter the year:");
    scanf("%d",&ptrDate->year);
}
void printDateOnConsole(struct Date* ptrDate)
{
    printf("The date is= %d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}
int main()
{
    struct Date D;
    int choice=1;
    do
    {
        printf("Enter the choice:\nPress 1 to input and display date\nPress 2 to display default date\nPress 3 to exit.\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        acceptDateFromConsole(&D);
        printDateOnConsole(&D);
        break;
        case 2:
        initDate(&D);
        printDateOnConsole(&D);
        break;
        case 3:
            choice=0; 
        default:
        printf("exit.\n");
        }
    } while (choice!=0);
    return 0;
}