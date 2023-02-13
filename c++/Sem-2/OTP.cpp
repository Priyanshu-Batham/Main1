#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

using namespace std;

int main()
{   
    srand( time( NULL ) );
    int l[10], o, i = 0, choice = 0, t1, t2, t;
    for (i = 0; i < 10; i++)
    {
        l[i] = rand() % 100;
    }
    i = 0;
    do
    {
        cout << "The OTP is : " << l[i] << "\nIt is expiring in 10 seconds" << endl;
        t1 = time(0);
        cout << "Enter your OTP : ";
        cin >> o;
        t2 = time(0);
        t = t2 - t1;
        if (o == l[i] && t <= 10)
        {
            cout << "OTP matched.";
            break;
        }
        else if (o == l[i] && t > 10)
        {
            cout << "This OTP is expired.\nEnter 1 for new OTP : ";
            cin >> choice;
        }
        else
        {
            cout << "Wrong OTP...\nEnter 1 for new OTP : ";
            cin >> choice;
        }
        i++;
    } while (choice == 1);
    // getch();
    return 0;
}