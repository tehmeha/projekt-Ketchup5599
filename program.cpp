#include <iostream>
#include <iostream>
using namespace std;

int main ()
{
    int broj_racuna [50]={256325,666,6541,849852,416,165,1236,59,185,78};
    string ime_prezime [50]={"Mato Bajic", "benkus pao", "Jakov Cretnik", "Ivan Pintaric", "Mali Cuks", "Ivan Buzuk", "Fran hrzic", "Leonardo Peloza", "Antonio Pajcek", "Cofi Gljiva" };
    int broj_korisnika = 50;
    double stanje[50]={69.69, 250.00, 3456.5, 48.13, 486.23, 78.5, 814.59, -999.99, -48.45, 59.89};

    for (int i=0; i<broj_korisnika; i++)
    {
        cout<<broj_racuna[i]<<"\t" << ime_prezime[i]<<"\t"<< stanje[i] << endl;
    }

int novi_broj_racuna;
string ime_prezime;
double stanje;
cout << "Unesite novi broj racuna ";
cin >> novi_broj_racuna;
cout << "Unesite ime i prezime korisnika ";
cin >> ;
cout << "Unesite stanje racuna ";
cin >> ;

broj_racuna[broj_korisnika] = novi_broj_racuna;
ime_prezime[broj_korisnika] = ;
[broj_korisnika] =
broj_korisnika++;

    return 0;
}
