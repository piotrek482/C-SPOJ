#include <iostream>

using namespace std;

int main()
{
    int n, k, i;
    int *tab;

    cout<<"Podaj ilosc elementow tablicy: ";
    cin>>n;

    cout<<endl<<"Podaj ilosc elem do przesuniecia w lewo: ";
    cin>>k;

    tab = new int [n];
    for (i=0; i<n; i++)
    {
        cin>>tab[i];
    }

    for (i=0; i<n; i++)
    {
        cout<<tab[i]<<" ";
    }

cout<<endl<<endl;
    for (i=0+k; i<n; i++)
    {
        cout<<tab[i]<<" ";
    }
    for (i=0; i<k; i++)
    {
        cout<<tab[i]<<" ";
    }

    delete [] tab;
    return 0;
}
