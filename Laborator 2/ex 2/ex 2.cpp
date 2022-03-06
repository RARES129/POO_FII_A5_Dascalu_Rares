#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "class1.h"
#include "global.h"

int main()
{
    int n;// cati elevi adaugam (putem adauga pana la 20 de elevi)
    int j,i = 1;
    int c=1; // ne indica daca vrem sa facem comparatii cu alti elevi sau nu
    class1 f[21];
    printf("Numar de elevi: ");
    scanf_s("%d", &n);
    while (i<=n)
    {
        printf("\nNumele Elevului %d: ",i);
        f[i].SGnume(1);
        printf("Nota Elevului %d Matematica: ", i);
        f[i].SGmatematica(1);
        printf("Nota Elevului %d Engleza: ", i);
        f[i].SGengleza(1);
        printf("Nota Elevului %d Istorie: ", i);
        f[i].SGistorie(1);
        f[i].Gmedie(1);
        i++;
    }
    if (n >= 2)
    {
        printf("\nComparatii:\n");
        while (1)
        {
            if (n == 2)
            {
                i = 1; j = 2;
            }
            else
            {
                printf("\nNumar elev: ");
                scanf_s("%d", &i);
                if (i == 0) break;
                printf("Numar elev: ");
                scanf_s("%d", &j);
            }
            if (j == 0) break;
            printf("\n");
            if (comparareNume(&f[i], &f[j]) == 0)
                printf("Numele sunt egale din punct de vedere lexicografic \n");
            else if (comparareNume(&f[i], &f[j]) == 1)
                printf("Numele %s este mai mic punct de vedere lexicografic \n", f[j].SGnume(0));
            else if (comparareNume(&f[i], &f[j]) == -1)
                printf("Numele %s este mai mic din punct de vedere lexicografic \n", f[i].SGnume(0));

            if (comparareMatematica(&f[i], &f[j]) == 0)
                printf("Notele la matematica sunt egale \n");
            else if (comparareMatematica(&f[i], &f[j]) == 1)
                printf("Nota la matematica a elevului %s este mai mare \n", f[i].SGnume(0));
            else if (comparareMatematica(&f[i], &f[j]) == -1)
                printf("Nota la matematica a elevului %s este mai mare \n", f[j].SGnume(0));

            if (comparareEngleza(&f[i], &f[j]) == 0)
                printf("Notele la engleza sunt egale \n");
            else if (comparareEngleza(&f[i], &f[j]) == 1)
                printf("Nota la engleza a elevului %s este mai mare \n", f[i].SGnume(0));
            else if (comparareEngleza(&f[i], &f[j]) == -1)
                printf("Nota la engleza a elevului %s este mai mare \n", f[j].SGnume(0));

            if (comparareIstorie(&f[i], &f[j]) == 0)
                printf("Notele la istorie sunt egale \n");
            else if (comparareIstorie(&f[i], &f[j]) == 1)
                printf("Nota la istorie a elevului %s este mai mare \n", f[i].SGnume(0));
            else if (comparareIstorie(&f[i], &f[j]) == -1)
                printf("Nota la istorie a elevului %s este mai mare \n", f[j].SGnume(0));

            if (comparareMedie(&f[i], &f[j]) == 0)
                printf("Mediile sunt egale \n");
            else if (comparareEngleza(&f[i], &f[j]) == 1)
                printf("Media elevului %s este mai mare \n", f[i].SGnume(0));
            else if (comparareEngleza(&f[i], &f[j]) == -1)
                printf("Media elevului %s este mai mare \n", f[j].SGnume(0));
            if (n > 2)
            {
                printf("\nDaca doriti sa comparati alti elevi, introduceti valoarea 1, in caz contrat, introduceti valoarea 0:  ");
                scanf_s("%d", &c);
                if (c == 0) break;
            }
            else break;
        }
    }
    return 0;
}

