#include <iostream>
using namespace std;

class A
{

public:
    void getdata()
    {
        cout << "Getting data\n";
    }

    void putdata()
    {
        cout << "Putting data\n";
    }
};

class B : private A
{
public:
    void get()
    {
        cout << "get data\n";
        A::getdata();
    }

    void put()
    {
        cout << "put data\n";
        A::putdata();
    }
};

class C : B
{
public:
    void hello()
    {
        cout << "hello\n";
        B::get();
    }
};

int main()
{
    A obj1;
    B obj2;
    C obj3;
    obj3.hello();
    return 0;
}