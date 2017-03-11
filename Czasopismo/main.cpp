#include <iostream>
#include <cmath>

using namespace std;

struct czasopismo
{
    char tytul[50];
    int rok_1_wyd;
    int liczba_numerow;
    float ocena;
};

typedef struct czasopismo Czasopismo;

int main()
{
    int ile, i;
    Czasopismo *tab;

  //wczytujemy ilosc elementow tablicy
    cout<<"Podaj ilosc elementow tablicy: ";
    cin>>ile;

    tab = new Czasopismo [ile];


    //wczytujemy rekordy
    for (i=0; i<ile; i++)
    {
        cout<<"Podaj tytul: ";
        cin>>tab[i].tytul;

        cout<<"Podaj rok 1 wydania: ";
        cin>>tab[i].rok_1_wyd;

        cout<<"Podaj liczbe numerow: ";
        cin>>tab[i].liczba_numerow;

        cout<<"Podaj ocene: ";
        cin>>tab[i].ocena;
        cout<<endl;
    }

    //wypisywanie
    for (i-0; i<ile; i++)
    {
        cout<<tab[i].tytul<<" ";
        cout<<tab[i].rok_1_wyd<<" ";
        cout<<tab[i].liczba_numerow<<" ";
        cout<<tab[i].ocena<<endl<<endl;
    }

    for (i=0; i<ile; i++)
    {
        cout<<"Tytul to: "<<tab[i].tytul<<" ";
        cout<<"Rok 1 wydania: "<<tab[i].rok_1_wyd<<" ";
        cout<<"Srednia liczba numerow na rok: "<<round(tab[i].liczba_numerow/2014-tab[i].rok_1_wyd);
    }


    delete [] tab;

    return 0;
}
