#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int shift, i;
    char cipher[100],c;
    cout << "Enter a Ciphered text:";
    gets(cipher);
    cout << "Enter the shift value:";
    cin >> shift;
    cout<<endl;
    cout<<endl;

    for (i = 0; cipher[i] != '\0'; i++)
    {
        if (cipher[i] != ' ')
        {   
            c = cipher[i] - shift;
            cout << c;
        }
        else{
            cout<<' ';
        }
    }

    return 0;
}