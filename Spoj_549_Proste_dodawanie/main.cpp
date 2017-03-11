#include <iostream>

using namespace std;

int main()
{
    int ile, i, n, j, suma;
    int *tab;

    cout<<"Ile testow chcesz wykonac: ";
    cin>>ile;
    cout<<endl;

    for (i=0; i<ile; i++)
    {
       suma=0;
       cout<<"Ile liczb chcesz zsumowac? - ";
       cin>>n;

       tab = new int [n];

        for (j=0; j<n; j++)
        {
           cout<<"Podaj "<< j+1 << " cyfre: ";
           cin>>tab[j];
        }

        cout<<endl;

        for (j=0; j<n; j++)
        {
           suma=suma+tab[j];
        }

    cout<<"Suma wynosi: "<<suma;
    cout<<endl;

    delete [] tab;
    }
    return 0;
 }
