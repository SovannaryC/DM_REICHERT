#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//Exercice 50:

//Exercice 51:
double q1(double* tab, int lng)
{
    assert(lng % 4 == 1);
    int quart = lng / 4;
    return tab[quart];
}

//Exercice 52:
int minecart(int* tab, int lng)
{
    int min = abs(tab[0]);
    for (int i = 0; i < lng; i+=1)
    {
        if (min > abs(tab[i]-i)) {min = abs(tab[i] - i);}
    }
    return min;
}

//Exercice 53:
int premiercommepremier(int* tab, int lng)
{
    for (int i = 1; i < lng; i+=1)
    {
        if (tab[0] == tab[i]) {return i;}
    }
    return -1;
}

//Exercice 54:
int* premiercommeavnt(int* tab, int lng)
{
    static int result[2] = {-1, 1};
    for (int i = 0; i<lng; i += 1)
    {
        for (int j = 0; j<i; j += 1)
        {
            if (tab[i]==tab[j])
            {
                result[0] = j;
                result[1] = i;
                return result;
            }
        }
    }
    return result;
}

//Exercice 55:

//Exercice 56:
int premierabsent(int tab[], int lng)
{
    int min = tab[0];
    for (int i = 1; i<lng; i+=1)
    {
        if (min > tab[i]) {min = tab[i];}
    }
/// IL FAUT RETURN UN TRUC 
}

int main()
{
    //Exercice 50:

    //Exercice 51:
    double tab[] = {1.2, 2.3, 3.4, 4.5, 5.6};
    printf("%f", q1(tab, 5));

    //Exercice 52:
    int tab2[] = {12, 2, 6, 89, 8, 1};
    printf("%d", minecart(tab2, 6));

    //Exercice 53:
    int tab3[] = {69, 4, 6, 89, 8, 1};
    printf("%d", premiercommepremier(tab3, 6));

    //Exercice 54:
    int n[] = {1, 2, 3, 4, 5, 6, 7, 4, 9};
    int* result = premiercommeavnt(n, 9);
    printf("%d, %d", result[0], result[1]);

    return 0;
}