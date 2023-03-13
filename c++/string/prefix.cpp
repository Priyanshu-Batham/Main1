#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i, choice, ctr = 1;
    char exp[10], newExp[10], opr;

    cout << "Enter an Expression:";
    gets(exp);
    cout << endl;
    cout << "Conver to?" << endl;
    cout << "Prefix" << endl;
    cout << "Postfix" << endl;
    cout << "Choice:";
    cin >> choice;

    for (i = 0; exp[i] != '\0'; i++)
    {

        if (exp[i] > 47 && exp[i] < 58)
        {
            newExp[ctr] = exp[i];
            ctr++;
        }

        else if (exp[i] > 41 && exp[i] < 48)
        {
            opr = exp[i];
        }
    }

    if(choice == 1){
        newExp[0] = opr;
        newExp[ctr] = '\0';
    }
    else if(choice == 2){
        newExp[0] = ' ';
        newExp[ctr] = opr;
        newExp[ctr+1] = '\0';
    }
    cout<<endl;
    cout<<newExp;

    return 0;
}
