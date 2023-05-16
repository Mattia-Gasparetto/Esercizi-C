#include <stdio.h>
int copia (int numeri[], int cont, int cp[])
{
    int lunghezza = 0;
    for (int i = 0; i < cont; i++)
    {
        if (numeri[i] > 0)
        {
            cp[lunghezza] = numeri[i];
            lunghezza++;
        }
    }
    return lunghezza;
}
int main()
{
    int cont = 4;
    int numeri[cont];
    int cp[cont];
    for (int i = 0; i < cont; i++)
    {
        printf("Inserisci una il %d° numero: \n", i+1);
        scanf("%d", &numeri[i]);
    }
    printf("Il vettore modificato è:\n");
    int lung = copia(numeri, cont, cp);
    for (int i = 0; i < lung; i++)
    {
        printf("%d", cp[i]);
    }
    printf("\nLa lunghezza del secondo array è: %d", lung);
    return 0;
}



