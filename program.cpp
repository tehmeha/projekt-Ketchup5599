#include <iostream>
#include <iostream>
using namespace std;

int main ()
{
    int broj_racuna [50]={256325,666,6541,849852,416,165,1236,59,185,78};
    string ime_prezime [50]={"Mato Bajic", "benkus pao", "Bog Isus", "Ivan Pintaric", "Mali Cuks", "Ivan Buzuk", "Fran Hrzic", "Leonardo Peloza", "Antonio Pajcek", "Cofi Gljiva" };
    int broj_korisnika = 10;
    double stanje[50]={69.69, 250.00, 3456.5, 48.13, 486.23, 78.5, 814.59, -999.99, -48.45, 59.89};

    while(1)
    {
        int n;
        cout << "1.) Ispis Podataka " <<  endl;
        cout << "2.) Unos Podataka " <<  endl;
        cout << "3.) Izlaz " <<  endl;
        cin >> n;
        if (n == 1)
        {
            for (int i=0; i<broj_korisnika; i++)
            {
                cout<<broj_racuna[i]<<"\t" << ime_prezime[i]<<"\t"<< stanje[i] << endl;
            }

        }
        else if (n == 2)
        {
           int novi_broj_racuna;
            string novo_ime_prezime;
            double novo_stanje;
            cout << "Unesite novi broj racuna ";
            cin >> novi_broj_racuna;
            cout << "Unesite ime i prezime korisnika ";
            cin >> novo_ime_prezime;
            cout << "Unesite stanje racuna ";
            cin >> novo_stanje;

            broj_racuna[broj_korisnika] = novi_broj_racuna;
            ime_prezime[broj_korisnika] = novo_ime_prezime;
            stanje [broj_korisnika] = novo_stanje;
            broj_korisnika++;
        }
        else if(n == 3)
            break;
    cout << endl;
    }


    return 0;
}
