#include <iostream>

using namespace std;

int main()
{
    int ile, n, i, j;
    int *tab;

    cout<<"Podaj ilosc testow: ";
    cin>>ile;

    for (i=0; i<ile; i++)
    {
        cout<<"Podaj ilosc elem testu: ";
        cin>>n;

        tab = new int [n];
        for (j=0; j<n; j++)
        {
            cin>>tab[j];
        }

        for (j=1; j<n; j++)
        {
            cout<<tab[j]<<" ";
        }

        for (j=0; j<1; j++)
        {
            cout<<tab[j]<<" ";
        }

        delete [] tab;
    }

    return 0;
}
