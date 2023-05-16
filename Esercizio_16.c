#include <stdio.h>
void modifica (char string[])
{
    int cont = 0;
    while (string[cont] != '\0') {
        string[cont] = string[cont+1];
        cont++;
    }
    string = '\0';
}
int main()
{
    char string[10];
    printf("Inserisci una stringa: \n");
    scanf("%s", string);
    modifica(string);
    printf("La stringa modificata è: %s", string);
    return 0;
}


