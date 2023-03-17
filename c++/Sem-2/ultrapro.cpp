#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;

struct rec
{
    char name[50];
    char f[50];
    char m[50];
    char board[50];
    float per;
    int id;
    char course[50];
} r[50];
class A
{
    int a, b;

public:
    void get()
    {
         cout << "\nEnter number of registrations:";
         cin >> b;
        for (a = 0; a < b; a++)
        {
             cout << "\nEnter name:";
             cin >> ::r[a].name;
             cout << "\nEnter Father's Name:";
             cin >> ::r[a].f;
             cout << "\nEnter Mother's Name:";
             cin >> ::r[a].m;
             cout << "\nEnter Board of school:";
             cin >> ::r[a].board;
             cout << "\nEnter percentage of 12th:";
             cin >> ::r[a].per;
             cout << "\nEnter course:";
             cin >> ::r[a].course;
            srand(time(0)); 
            ::r[a].id = (rand() % 71)+1 ;
        }
    }
    void out()
    {
        for (a = 0; a < b; a++)
        {
             cout << "Your id is:" << ::r[a].id;
        }
    }
};

class Ent : A
{
public:
    void getd()
    {
        A::get();
    }
    void putd()
    {
        A::out();
         cout << "\nYou have passed the entrance\n";
         cout << "\nCounselling is on 29 Feb\n";
    }
};

class coun : Ent
{
    int i;

public:
    void f()
    {
         cout << "\nCounselling\n";
         cout << "Pay the fees 30000:";
         cout << "\nEnter the amount:";
         cin >> i;
    }
    void g()
    {
        Ent::getd();
        Ent::putd();
        f();
        if (i >= 30000)
        {
             cout << "\nYou are part of NPGC";
             cout << "\nOrientation on 22 March";
        }
        else
        {
             cout << "\nFind another college";
        }
    }
};

class sem : coun
{
    int a, l;

public:
    void getl()
    {
        coun::g();
         cout << "\nWhat is your id?";
         cin >> a;
        for (l = 0; l < 50; l++)
        {
            if (a == ::r[l].id)
            {
                 cout << "\nWelcome to Orientation\n";
                 cout << ::r[l].name << "\n";
                 cout << ::r[l].course << "\tSem 1\n";
                break;
            }
        }
        if (l == 50)
             cout << "\nInvalid Choice";
    }

    void putl()
    {
        getl();
         cout << "\n Good luck for your sem exams";
    }
};

int main()
{
    sem obj;
    obj.putl();
}