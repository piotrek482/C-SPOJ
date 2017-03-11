#include <iostream>

using namespace std;

int main()
{
    int ile, i, j, b, suma, aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,kk;
    char tab[11];

    cout<<"Ile numerow PESEL chcesz sprawdzic? - ";
    cin>>ile;
    cout<<endl<<endl;

    for (i=0; i<ile; i++)
    {
        suma=0;
        cout<<"Wprowadz 11 cyfrowy numer pesel osoby numer "<<i+1<<": ";

        for (j=0; j<11; j++)
        {
            cin>>tab[j];
        }

       for (j=0; j<11; j++)
        {
            cout<<tab[j];
        }

        //zamiana char na int: char-'0';

        aa=tab[0]-'0';
        bb=tab[1]-'0';
        cc=tab[2]-'0';
        dd=tab[3]-'0';
        ee=tab[4]-'0';
        ff=tab[5]-'0';
        gg=tab[6]-'0';
        hh=tab[7]-'0';
        ii=tab[8]-'0';
        jj=tab[9]-'0';
        kk=tab[10]-'0';

        aa=aa*1;
        bb=bb*3;
        cc=cc*7;
        dd=dd*9;
        ee=ee*1;
        ff=ff*3;
        gg=gg*7;
        hh=hh*9;
        ii=ii*1;
        jj=jj*3;
        kk=kk*1;

        cout<<endl<<endl<<aa<<endl;
        cout<<bb<<endl;
        cout<<cc<<endl;
        cout<<dd<<endl;
        cout<<ee<<endl;
        cout<<ff<<endl;
        cout<<gg<<endl;
        cout<<hh<<endl;
        cout<<ii<<endl;
        cout<<jj<<endl;
        cout<<kk<<endl;

        suma=aa+bb+cc+dd+ee+ff+gg+hh+ii+jj+kk;
        cout<<endl<<endl<<"Suma wynosi: "<<suma<<endl;

        if (suma>0)
        {
            b=suma%10;
            if (b==0)
            {
                cout<<"D"<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }
        }
        else
        {
            cout<<"Suma jest ujemna!";
        }

    }
    return 0;

}
