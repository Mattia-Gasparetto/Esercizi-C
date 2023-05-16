#include <stdio.h>
#include <string.h>
int palindromo (char string[])
{
    int length = strlen(string);
    for (int i = 0; i < length / 2; i++) 
    {
        if (string[i] != string[length-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char string[100];
    printf("Inserisci una stringa: \n");
    scanf("%s", string);
    if (palindromo(string))
    {
        printf("La stringa è palindroma");
    }
    else
    {
        printf("La stringa non è palindroma");
    }
    return 0;
}

