#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "\n\n\t\t\t\t*_________ Start Of Program __________*\n\n\n";
    while (true)
    {
        /* code */
        cout << "\t\t\t\t*___________ For Exit Please Enter ' 0 '_________*\n";

        int Table_Number;
        cout << " \n\t\t\t\t Which One Table You Want To Print.\n\n\n ";
        cin >> Table_Number;
        if (Table_Number == 0)
        {
            /* code */
            cout << "\t\t\t\t*___________ End Of Program ._________*\n";
            break;
        }
        int calculate;
        cout << "How Many Times You Want To calculate.\n";
        cin >> calculate;

        cout << "\n\n";
        cout << "You are Enter :-  " << Table_Number << "\n\n\n";
        for (int Counter = 1; Counter <= calculate; Counter++)
        {

            cout << Table_Number << " x " << Counter << " = " << Counter * Table_Number << endl;
        }
    }
    return 0;
}