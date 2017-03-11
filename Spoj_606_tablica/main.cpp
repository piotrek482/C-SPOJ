/* program odwraca kolejnoœæ cyfr w tablicy*/

#include <iostream>

using namespace std;


int main()
{
    int t, n, i, j, *tab;
    cout<<"ile wykonac testow: ";
    cin>>t;
    if (t<=0)
    {
        while (t<=0)
        {
            cout<<"Podaj dodatnia watrosc t: ";
            cin>>t;
            cout<<endl;
        }
    }

    for (i=0; i<t; i++)
    {
        cout<<"Ile elementow tabliy: ";
        cin>>n;
        if (n<=0)
    {
        while (n<=0)
        {
            cout<<"Podaj dodatnia watrosc n: ";
            cin>>n;
            cout<<endl;
        }


    }

        tab = new int [n];

        for (j=0; j<n; j++)
        {
            cin>>tab[j];
        }
        cout<<endl<<endl;

        for (j=n-1; j>=0; j--)
        {
            cout<<tab[j]<<" ";
        }
        delete [] tab;
    }

    return 0;
}
