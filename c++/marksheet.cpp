#include <iostream>
#include <stdlib.h>
using namespace std;
class MS // Management Department
{
    struct rec
    {
        char name[20];
        int roll;
        char fname[20];
        char mname[20];
        float marks[3];
    };
    struct rec stu[3];

public:
    int sum = 0;
    void getdata()
    {
        int i, k;
        for (i = 0; i < 3; i++)
        {
            cout << "Enter the name:\n"
                 << endl;
            cin >> stu[i].name;
            cout << "Enter Father's name:\n"
                 << endl;
            cin >> stu[i].fname;
            cout << "Enter Mother's name:\n"
                 << endl;
            cin >> stu[i].mname;
            cout << "Enter the roll no. of the student:\n"
                 << endl;
            cin >> stu[i].roll;
            for (k = 0; k < 3; k++)
            {
                cout << "Enter the marks of " << k + 1 << "th Subject:\n"
                     << endl;
                cin >> stu[i].marks[k];
            }
        }
    }
    void putdata()
    {
        int i, k, sum = 0;
        for (i = 0; i < 3; i++)
        {
            cout << "|Name : " << stu[i].name << endl;
            cout << "|Roll No. : " << stu[i].roll << endl;
            cout << "|Father's Name : " << stu[i].fname << endl;
            cout << "|Mother's Name : " << stu[i].mname << endl;
            for (k = 0; k < 3; k++)
            {
                cout << "|Marks : " << stu[i].marks[k] << endl;
                sum = sum + stu[i].marks[k];
            }
            sum = sum / 3;
            cout << "\nPercentage = " << sum;
            cout << "\n\n";
            sum = 0;
        }
    }
};

class CS // CS Department
{
    struct rec
    {
        char name[20];
        int roll;
        char fname[20];
        char mname[20];
        float marks[3];
    };
    struct rec stu[3];

public:
    void getdata()
    {
        int i, k;
        for (i = 0; i < 3; i++)
        {
            cout << "Enter the name:\n"
                 << endl;
            cin >> stu[i].name;
            cout << "Enter Father's name:\n"
                 << endl;
            cin >> stu[i].fname;
            cout << "Enter Mother's name:\n"
                 << endl;
            cin >> stu[i].mname;
            cout << "Enter the roll no. of the student:\n"
                 << endl;
            cin >> stu[i].roll;
            for (k = 0; k < 3; k++)
            {
                cout << "Enter the marks of " << k + 1 << "th Subject:\n"
                     << endl;
                cin >> stu[i].marks[k];
            }
        }
    }
    void putdata()
    {
        int i, k, sum = 0;
        for (i = 0; i < 3; i++)
        {
            cout << "|Name : " << stu[i].name << endl;
            cout << "|Roll No. : " << stu[i].roll << endl;
            cout << "|Father's Name : " << stu[i].fname << endl;
            cout << "|Mother's Name : " << stu[i].mname << endl;
            for (k = 0; k < 3; k++)
            {
                cout << "|Marks : " << stu[i].marks[k] << endl;
                sum = sum + stu[i].marks[k];
            }
            cout << "\nPercentage = " << sum / 3;
            cout << "\n\n";
            sum = 0;
        }
    }
};

class FCS : private CS
{
public:
    void get()
    {
        CS::getdata();
    }
    void put()
    {
        CS::putdata();
    }
};

class FMS : private MS
{
public:
    void get()
    {

        MS::getdata();
    }
    void put()
    {
        MS::putdata();
    }
};
int main()
{
    int c = 0, c2 = 0;
    FCS obj1;
    FMS obj2;
    int choice, op_input, cr_input;
    cout << "------------NATIONAL POST GRADUATE COLLEGE------------\n\n"
         << endl;

    while (1)
    {
        cout << "What Operation You want to Perform:\n"
             << endl;

        cout << "1.Enter Record  \t2.Display Records  \t3.Exit\n"
             << endl;
        cin >> op_input;
        if (op_input == 1)
        {
            cout << "Choose the course:\n"
                 << endl;
            cout << "1.BCA \n2.BBA" << endl;
            cin >> cr_input;
            switch (cr_input)
            {
            case 1:
                c++;
                obj1.get();
                break;

            case 2:
                c2++;
                obj2.get();
                break;
            }
            cout << "Record Entered Successfully" << endl;
        }
        else if (op_input == 2)
        {
            cout << "Welcome to Result Page\n\n"
                 << endl;
            cout << "Choose the course:\n"
                 << endl;
            cout << "1.BCA \n2.BBA" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                if (c == 0)
                {
                    cout << "Error 404...No Records Found in BCA" << endl;
                }
                else
                {
                    obj1.put();
                }
                break;
            case 2:
                if (c2 == 0)
                {
                    cout << "Error 404...No Records Found in BBA" << endl;
                }
                else
                {
                    obj2.put();
                }
                break;
            }
        }
        else if (op_input == 3)
        {
            exit(0);
        }
        else
        {
            cout << "wrong choice!!!...enter again" << endl;
        }
    }
    return 0;
}