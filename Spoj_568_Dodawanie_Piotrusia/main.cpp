#include <iostream>

using namespace std;

int main()
{
    int ile, x, i, b, r, tab[80];

    cout << "Ile testow wykonac: ";
    cin>>ile;

    for (i=0; i<ile; i++)
    {
        cout<<"Podaj liczbe: ";
        cin>>x;

        b=x;
        int iteracje=0;
        while (b!=0)
        {
            r=b%10;
            cout<<r<<" ";
            b=b/10;
            iteracje++;
        }

        for (int j=0; j<iteracje; j++)
        {
            r=b%10;
            b=b/10;
            tab[j]=b;
        }

        for (int j=0; j<iteracje; j++)
        {
            cout<<tab[j]<<" ";
        }

        /*for (int j=0; j<iteracje; j++)
        {
            wynik1= tab[j] + tab [j+1];
        }

        for (int j=iteracje-1; j>0 j++)
        {
            wynik2= tab[j] + tab [j+1];
        }

        while (wynik1 != wynik2)
        {

        }*/

        cout<<endl<<endl;

    }
    return 0;
}
