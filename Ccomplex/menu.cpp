#include <iostream>
#include <conio.h>
#include "Menu.h"

using namespace std;

void Menu::print_menu()
{   
    int Real = 0;
    int Imag = 0;

    while (true)
    {
        system("cls");
        cout << "Enter Ccomplex first " << endl;
        cout << "\nEnter real";
        cout << "\n> ";
        cin >> Real;

        while (true)
        {
            cout << "\nEnter imag";
            cout << "\n> ";
            cin >> Imag;
            if (Imag == 0)
                cout << "\nEror!";
            else
                break;
        }

        Ccomplex a(Real, Imag);

        cout << "Enter Ccomplex second " << endl;
        cout << "\nEnter real";
        cout << "\n> ";
        cin >> Real;

        while (true)
        {
            cout << "\nEnter imag";
            cout << "\n> ";
            cin >> Imag;
            if (Imag == 0)
                cout << "\nEror!";
            else
                break;
        }

        Ccomplex b(Real, Imag);

        Ccomplex div;
        div = a / b;
        if (Real == 0)
            cout << "\nEror! Second number equally 0! Cannot be divided!";
        else
            cout << "\nOperator division: " << "\nReal:" << div.Real() << "\nImag: " << div.Imag();

        cout << "\n---------------------------------\n";

        a.operator*=(b);
        cout << "\nOperator *=: " << "\nReal:" << "\nReal: " << a.Real() << "\nImag: " << a.Imag() << endl;

        char c;
        cout << "\nEnter act. \n1-count another number \n2-Exit";
        cout << "\n> ";
        cin >> c;
        switch (c)
        {
        case'1':
            break;
        case'2':
            exit(0);
            break;
        default:
            cout << "\nError!";
            break;

        }
    }
}


