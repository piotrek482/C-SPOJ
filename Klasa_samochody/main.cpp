#include <iostream>

using namespace std;

class Samochody
{
public:

    string marka;
    string model;
    int rocznik;
    float przebieg;

    void wczytaj()
    {
        cout<<"Podaj marke samochodu: ";
        cin>>marka;
        cout<<endl<<"Podaj model samochodu: ";
        cin>>model;

        cout<<endl<<"Podaj rok produkcji: ";
        cin>>rocznik;
        cout<<endl<<"Podaj przebieg: ";
        cin>>przebieg;
    }

    void wypisz()
    {
        cout<<"Ten samochod to "<<marka<<", model - "<<model<<", rok produkcji: "<<rocznik<<" o przebiegu (km): "<<przebieg<<endl;
    }
};

int main()
{
    Samochody s1, s2;

    s1.wczytaj();
    s1.wypisz();

    s2.wczytaj();
    s2.wypisz();

    return 0;
}
