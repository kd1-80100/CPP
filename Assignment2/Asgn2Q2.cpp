#include <iostream>
using namespace std;
class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    // Address() {}
    Address(string building="Laxmi", string street="Indira housing society", string city="Ichalkaranji", int pin=416115) 
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    void accept()
    {
        cout << "Enter the building name:";
        getline(cin,this->building);
        cout << "Enter the street name:";
        getline(cin,this->street);
        cout << "Enter the city:";
        getline(cin,this->city);
        cout << "Enter the pincode:";
        cin >> pin;
    }
    void display()
    {
        cout << "Address is: " << building << "," << street << ","
             << city << "-" << pin << endl;
    }
    void setBuilding(string building)
    {
        this->building=building;
    }
    string getBuilding()
    {
        return this->building;
    }
    void setStreet(string street)
    {
        this->street=street;
    }
    string getStreet()
    {
        return this->street;
    }
    void setCity(string city)
    {
        this->city=city;
    }
    string getCity()
    {
        return this->city;
    }
    void setPin(int pin)
    {
        this->pin=pin;
    }
    int getPin()
    {
        return this->pin;
    }
};

int main()
{
    Address a1;
    Address a2("21/407/02","Indira Housing Society","Ichalkaranji",416115);
    a1.accept();
    a1.display();
    a2.display();
    return 0;
}