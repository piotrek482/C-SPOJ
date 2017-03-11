#include <iostream>

using namespace std;

int main()
{
    int ile, i, *tab, n;

    cout<<"Podaj ilosc testow: ";
    cin>>ile;

    for (i=0; i<ile; i++)
    {
        cout<<"Podaj ile liczb w tablicy: ";
        cin>>n;

        tab = new int [n];
        for (int j=0; j<n; j++)
        {
            cin>>tab[j];
        }

        for (int j=1; j<n; j=j+2)
        {
            cout<<tab[j]<<" ";
        }

        for (int j=0; j<n; j=j+2)
        {
            cout<<tab[j]<<" ";
        }

        cout<<endl;
        delete [] tab;
    }


    return 0;
}
