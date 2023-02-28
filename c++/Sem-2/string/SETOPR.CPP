#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
//using namespace std;

void duplicate(char lineA[], char lineB[]);
char unique1[150];
char unique2[150];

int main()
{
    int i,j, ctr = 0,choice, flag = 0;
    char line1[50], line2[50], line3[300];
    char newLine[300];
    char a;
    system("cls");
    cout << "Enter string one:";
    gets(line1);
    cout << "Enter string two:";
    gets(line2);

    for (i = 0; line1[i] != '\0'; i++)
    {
	line3[ctr] = line1[i];
	ctr++;
    }

    // for adding space between both strings
    // line3[ctr] = ' ';
    // ctr++;

    for (i = 0; line2[i] != '\0'; i++)
    {
	line3[ctr] = line2[i];
	ctr++;
    }
    line3[ctr] = '\0';
    cout << endl;
    cout<<"Concatted String:";
    puts(line3);
    cout << endl;
    duplicate(line1,line2);
    cout<<"Non duplicated string1:";
    cout << unique1<<endl;
    cout<<"Non duplicated string2:";
    cout<<unique2<<endl;
    cout<<endl;
    cout<<"Which Operation to perform?"<<endl;
    cout<<"1: Intersection"<<endl;
    cout<<"2: Union"<<endl;
    cout<<"3: Minus"<<endl;
    cout<<"Choice:";
    cin>>choice;
    cout<<endl;

    if(choice == 1){
	cout<<"Intersection:";
	for(i = 0; unique1[i] != '\0'; i++){
	    for(j = 0;unique2[j] != '\0'; j++){
		if(unique1[i] == unique2[j]){
		    cout<<unique1[i];
		}
	    }
	}
    }
    else if(choice == 2){
	ctr = 0;
	cout<<"Union:";
	cout<<unique1;
	for(i = 0; unique2[i] != '\0'; i++){
	    for(j = 0;unique1[j] != '\0'; j++){
		if(unique2[i] == unique1[j]){
		    flag = 1;
		    break;
		}
	    }
	    if(flag == 0){
		cout<<unique2[i];
	    }
	    else{
		flag = 0;
	    }
	}
    }
    else if(choice == 3){
	cout<<"Minus:";
	for(i = 0; unique2[i] != '\0'; i++){
	    for(j = 0;unique1[j] != '\0'; j++){
		if(unique1[i] == unique2[j]){
		    unique1[i] = ' ';
		}
	    }
	}
	cout<<unique1;
    }
    //getch();
    return 0;
}

void duplicate(char lineA[], char lineB[])
{
    int i, j, ctr = 0, flag = 0;
    for (i = 0; lineA[i] != '\0'; i++)
    {
	if (lineA[i] != ' ')
	{
	    for (j = 0; unique1[j] != '\0'; j++)
	    {
		if (unique1[j] == lineA[i])
		{
		    flag = 1;
		    break;
		}
	    }
	    if (flag == 0)
	    {
		unique1[ctr] = lineA[i];
		ctr++;
		unique1[ctr] = '\0';
	    }
	    else
	    {
		flag = 0;
	    }
	}
    }
    flag = 0;
    ctr = 0;

    for (i = 0; lineB[i] != '\0'; i++)
    {
	if (lineB[i] != ' ')
	{
	    for (j = 0; unique2[j] != '\0'; j++)
	    {
		if (unique2[j] == lineB[i])
		{
		    flag = 1;
		    break;
		}
	    }
	    if (flag == 0)
            {
                unique2[ctr] = lineB[i];
                ctr++;
                unique2[ctr] = '\0';
            }
            else
            {
                flag = 0;
            }
        }
    }
}
