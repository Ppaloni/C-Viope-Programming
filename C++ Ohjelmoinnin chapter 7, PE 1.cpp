//C++ Ohjelmoinnin chapter 7, PE 1

#include <iostream>
using namespace std;

int main()  {
    int luku1, luku2, luku3, suurinLuku, pieninLuku;
    cout << "Syötä ensimmäinen kokonaisluku";
    cin >> luku1;
    cout << "Syötä toinen kokonaisluku";
    cin >> luku2;
    cout << "Syötä kolmas kokonaisluku";
    cin >> luku3;
    suurinLuku = suurin(luku1, luku2, luku3);
    pieninLuku = pienin(luku1, luku2, luku3);
    cout << "Syöttämistäsi luvuista  suurin oli " << suurinLuku;
    cout << " ja pienin" << pieninLuku << "." << endl;
}

int suurin (int eka, int toka, int kolmas)
{
    int suurin;

    if (eka > toka && eka > kolmas) 
        return eka;
    else if (toka > eka && toka > kolmas)
        return toka;
    else return kolmas;
    
    
    return suurin;
}

int pienin (int eka, int toka, int kolmas)
{
    int pienin;

    if (eka < toka && eka < kolmas) 
        return eka;
    else if (toka < eka && toka < kolmas)
        return toka;
    else return kolmas;
    
    
    return pienin;
}