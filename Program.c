#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LENGTH 50

void getInputAndCheck(char stringarr[]);
bool checkForPolyndrome(char stringarr[]);

int main()
{
    char str[LENGTH] = " ";
    char strcopy[LENGTH] = " ";

    getInputAndCheck(str);
    checkForPolyndrome(str);
}

void getInputAndCheck(char stringarr[])
{
    printf("Please enter the input to check: ");
    fgets(stringarr, LENGTH, stdin);
}

bool checkForPolyndrome(char stringarr[])
{
    char stringreversecopy[] = " ";
    int i = 0;
    int lengthOfCurrent = 0;

    lengthOfCurrent = strlen(stringarr);
    for (i = 0; i<lengthOfCurrent; i++)
    {
        stringreversecopy[i] = stringarr[lengthOfCurrent - i];
    }

    printf("%s", stringreversecopy);
}
