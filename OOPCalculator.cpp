#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
using namespace std;

class Calculator
{
    double A, B;

public:
    void get()
    {
        cout << "\n";
        cout << "Enter First Number: ";
        cin >> A;
        cout << "Enter Second Number: ";
        cin >> B;
    }
    double add()
    {
        return A + B;
    }
    double sub()
    {
        return A - B;
    }
    double mul()
    {
        return A * B;
    }
    double div()
    {
        if (A == 0 || B == 0)
        {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else
        {
            return A / B;
        }
    }
};

void displayChoice();
void toContinue();

int main()
{
    int choice;
    Calculator cal;

    do
    {
        displayChoice();
        cout << "\nEnter number of choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cal.get();
            cout << "Result: " << cal.add() << endl;
            toContinue();
            break;
        case 2:
            cal.get();
            cout << "Result: " << cal.sub() << endl;
            toContinue();
            break;
        case 3:
            cal.get();
            cout << "Result: " << cal.mul() << endl;
            toContinue();
            break;
        case 4:
            cal.get();
            cout << "Result: " << cal.div() << endl;
            toContinue();
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}

void displayChoice()
{
    cout << "Object Oriented Programming"
         << "\nRuben Lorenz S. Yboa"
         << "\n----- My Calculator -----"
         << "\n[1] Addition"
         << "\n[2] Subtraction"
         << "\n[3] Multiplication"
         << "\n[4] Division"
         << "\n[0] Exit";
    return;
}

void toContinue()
{
    int choice = 0;

    cout << "\n Please enter `1` to continue..." << endl;
    cin >> choice;

    if (choice == 1)
    {
        std::cout << "\033[2J\033[H";
        return;
    }
    else
    {
        std::exit(0);
    }
}
