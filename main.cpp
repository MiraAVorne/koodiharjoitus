// kommenttia yhdellä rivillä
/*
kommentteja, 1. rivi
kommentteja, 2. rivi
*/
#include <iostream>

using namespace std;

int main()
{
   cout << "Hello World"  
        << endl; 
        
   int ika = 43;
   cout << ika
        << endl;
    
    double pii = 3.141592;
    cout << pii
         << endl;

    double pallon_sade, pallon_ala, pallon_tilavuus;

    int luku;
    cout << "Anna säde " << endl;
	  cin >> pallon_sade;

    pallon_ala=4*pii*(pallon_sade*pallon_sade);
    pallon_tilavuus=(pallon_ala*pallon_sade)/3;

    cout<<pallon_tilavuus<< endl;

    int alueen_leveys = 15;
    int alueen_pituus = 35;

    int laatta_leveys = 5;
    int laatta_pituus = 8;

    cout <<"Laatta menee kokonaisena piha-alueelle "<<(alueen_leveys/laatta_leveys)*(alueen_pituus/laatta_pituus)<<" kertaa"
    <<endl;

    cout << "Leveyssuuunnassa tilaa jää "<<alueen_leveys%laatta_leveys<<"m"<<endl;

    cout << "Pituussuunnassa tilaa jää "<<alueen_pituus%laatta_pituus<<"m"<<endl;

    cout << "Yli jäävän alueen koko on siis 15*" << alueen_pituus%laatta_pituus << ": " << 15 * (alueen_pituus%laatta_pituus) << "m2"<<endl;

    cout << "valmis";
}