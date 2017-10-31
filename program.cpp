#include <iostream>
#include <iostream>
using namespace std;

int main ()
{
    int broj_racuna [10]={256325,666,6541,849852,416,165,1236,59,185,78};
    string ime_prezime [10]={"Mato Bajic", "Fran Benkus", "Antonio Rimac", "Ivan Pintaric", "Mali Cuks", "Ivan Buzuk", "Fran hrzic", "Leonardo Peloza", "Antonio Pajcek", "Cofi Gljiva" };
    double stanje [10]={69.69, 250.00, 569.26, 48.13, 486.23, 78.5, 814.59, -999.99, -48.45, 59.89};

    for (int i=0; i<10; i++)
    {
        cout<<broj_racuna[i]<<"\t" << ime_prezime[i]<<"\t"<< stanje[i];
    }


    return 0;
}
