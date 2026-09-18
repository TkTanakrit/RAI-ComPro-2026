#include <stdio.h>

void countCharacters(char str[], int *letters, int *digits, int *special)
{
    int i = 0;

    *letters = 0;
    *digits = 0;
    *special = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            (*letters)++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            (*digits)++;
        }
        else
        {
            (*special)++;
        }

        i++;
    }
}

int main()
{
    char str[100];
    int letterscount, digitscount, specialcount;

    printf("Input: ");
    fgets(str, sizeof(str), stdin);

    countCharacters(str, &letterscount, &digitscount, &specialcount);

    printf("Output:\n");
    printf("Letters: %d\n", letterscount);
    printf("Digits: %d\n", digitscount);
    printf("Special Characters / Symbols: %d\n", specialcount);

    return 0;
}