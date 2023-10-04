#include <iostream>
using namespace std;
class Box
{
private:
    int length;
    int height;
    int width;

public:
    Box() {}
    Box(int length, int height, int width)
    {
        length = this->length;
        height = this->height;
        width = this->width;
    }
    void acceptValues()
    {
        cout << "Enter the length:";
        cin >> length;
        cout << "Enter the height:";
        cin >> height;
        cout << "Enter the width:";
        cin >> width;
    }
    void Volume()
    {
        int volume;
        volume = this->height * this->width * this->length;
        cout << "Volume is: " << volume << endl;
        cout << "****************************"<<endl;

    }
};
int main()
{
    Box b;
    int choice;
    do
    {
        cout<<"Press 1 to enter the Length,Width,Height of box."<<endl;
        cout<<"Press 0 to exit."<<endl;
        cout<<"Enter the choice:"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            b.acceptValues();
            b.Volume();
            break;
        default:
        cout << "****************************"<<endl;
        }
    } while (choice != 0);
    cout << "Thank You for using Volume Calculation App." << endl;
    return 0;
}