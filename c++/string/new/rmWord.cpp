#include<iostream>
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

void removeAll(char str[], char toRemove[]);


int main()
{
    char str[MAX_SIZE];
    char toRemove[MAX_SIZE];

    printf("Enter any string: ");
    gets(str);
    printf("Enter word to remove: ");
    gets(toRemove);

    printf("String before removing '%s' : \n%s", toRemove, str);

    removeAll(str, toRemove);

    printf("\n\nString after removing '%s' : \n%s", toRemove, str);

    return 0;
}

void removeAll(char str[], char toRemove[])
{
    int i, j, stringLen, toRemoveLen;
    int found;

    stringLen   = strlen(str);     
    toRemoveLen = strlen(toRemove);


    for(i=0; i <= stringLen - toRemoveLen; i++)
    {
    
        found = 1;
        for(j=0; j<toRemoveLen; j++)
        {
            if(str[i + j] != toRemove[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            for(j=i; j<=stringLen - toRemoveLen; j++)
            {
                str[j] = str[j + toRemoveLen];
            }

            stringLen = stringLen - toRemoveLen;

            i--;
        }
    }
}