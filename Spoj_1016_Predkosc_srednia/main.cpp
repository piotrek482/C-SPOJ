#include <iostream>

using namespace std;

int main()
{
    int ile, i, v1, v2;

    cout<<"Podaj liczbe testów: ";
    cin>>ile;

    for (i=0; i<ile; i++)
    {
        cout<<"Podaj predkosc v1: ";
        cin>>v1;

        cout<<"Podaj predkosc v2: ";
        cin>>v2;

        int wynik = 2*v1*v2/(v1+v2);
        cout<<wynik<<endl;
    }

    return 0;
}
