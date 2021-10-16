#include<iostream>
using namespace std;
class toll
{

    unsigned int car_no=0;
    double amount=0;

public:
    void initialiseToZero();
    void display();
    void Paying_car();
    void Non_paying_car();
};

void toll :: initialiseToZero()
{
    car_no;
    amount;
}

void toll :: Paying_car()
{
    amount =amount +50;
    car_no++;
}

void toll :: Non_paying_car()
{

    car_no++;
}
void toll :: display()
{
    cout<<"No. of cars passed ="<<car_no<<endl;
    cout<<"Amount Collected = "<<amount<<endl;
}

int main()
{

    toll t;
    toll initialiseToZero();

    int choice;
    do
    {
        cout<<"1. Paying "<<"2. Non Paying "<<"3. display"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            t.Paying_car();
            break;
        case 2:
            t.Non_paying_car();
            break;
        case 3:
            t.display();
            break;

        }
    }
    while(choice!=3);


    return 0;
}










