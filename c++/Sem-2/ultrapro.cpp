#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct rec
{
    char name[50];
    char f[50];
    char m[50];
    char board[50];
    float per;
    int id;
    char caste[50];
    char course[50];
} r[50];
class A
{
    int a, b;

public:
    void get()
    {
        std::cout << "\nEnter number of registrations=";
        std::cin >> b;
        for (a = 0; a < b; a++)
        {
            std::cout << "\nEnter name=";
            std::cin >> ::r[a].name;
            std::cout << "\nEnter Father's Name=";
            std::cin >> ::r[a].f;
            std::cout << "\nEnter Mother's Name=";
            std::cin >> ::r[a].m;
            std::cout << "\nEnter Board of school=";
            std::cin >> ::r[a].board;
            std::cout << "\nEnter percentage of 12th=";
            std::cin >> ::r[a].per;
            std::cout << "\nEnter caste=";
            std::cin >> ::r[a].caste;
            std::cout << "\nEnter course=";
            std::cin >> ::r[a].course;
            srand(time(0)); 
            ::r[a].id = (rand() % 71)+1 ;
        }
    }
    void out()
    {
        for (a = 0; a < b; a++)
        {
            std::cout << "Your id is:" << ::r[a].id;
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
        std::cout << "\nYou have passed the entrance\n";
        std::cout << "\nCounselling is on 29 Feb\n";
    }
};

class coun : Ent
{
    int i;

public:
    void f()
    {
        std::cout << "\nCounselling\n";
        std::cout << "Pay the fees 30000:";
        std::cout << "\nEnter the amount:";
        std::cin >> i;
    }
    void g()
    {
        Ent::getd();
        Ent::putd();
        f();
        if (i >= 30000)
        {
            std::cout << "\nYou are part of NPGC";
            std::cout << "\nOrientation on 22 March";
        }
        else
        {
            std::cout << "\nFind another college";
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
        std::cout << "\nWhat is your id?";
        std::cin >> a;
        for (l = 0; l < 50; l++)
        {
            if (a == ::r[l].id)
            {
                std::cout << "\nWelcome to Orientation\n";
                std::cout << ::r[l].name << "\n";
                std::cout << ::r[l].course << "\tSem 1\n";
                break;
            }
        }
        if (l == 50)
            std::cout << "\nInvalid Choice";
    }

    void putl()
    {
        getl();
        std::cout << "\n Good luck for your sem exams";
    }
};

int main()
{

    sem obj;
    obj.putl();
}