#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int ile, i, j, wynik, doba=86400;
    long unsigned int ile_zaproszonych, ile_ciastek;
   long unsigned int *tab;
   float suma=0, czas=0;

   cout<<"Podaj ilosc zestawow: ";
   cin>>ile;

   for (i=0; i<ile; i++)
   {
        cout<<"Ile obzartuchow bedzie na zlocie: ";
        cin>>ile_zaproszonych;

        cout<<endl;

        cout<<"Ile ciastek jest w pudelku: ";
        cin>>ile_ciastek;

        tab = new long unsigned int [ile_zaproszonych];

        suma = 0;

        for (j=0; j<ile_zaproszonych; j++)
        {
            cout<<"Podaj czas zjedzenia ciastkata przez obzartucha "<<j+1<<": ";
            cin>>tab[j];
            czas=doba/tab[j];
            suma+=czas;
        }

        cout<<"CZAS: "<<suma<<endl;

        int wynik = ceil(suma/ile_ciastek);

        cout<<"Trzeba kupic "<<wynik<<" paczek ciastek"<<endl<<endl;

        delete [] tab;
   }
   return 0;
}
