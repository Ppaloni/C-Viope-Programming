//C++ Ohjelmoinnin chapter 8, PE1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    float tunnit[30], sum=0;
    int n;
    int i;
    int y;
    
    cout << "Ohjelma laskee yhteen haluamasi ajanjakson aikana tehdyt työtunnit sekä keskimääräisen työpäivän pituuden." << endl;
    cout << "Kuinka monta päivää:" << endl;
    cin >> n;
    
    
    for (i=1; i <= n; i++){
        cout << "Anna " << i << ". päivän työtunnit:" << endl;
        cin >> tunnit[i];
        sum += tunnit[i];
    }
    
            
    
    cout << "Tehdyt tunnit yhteensä: " << sum << endl;
    cout << "Keskimääräinen työpäivän pituus: " << sum / n << endl;
    cout << "Syötetyt tunnit: "; 
    for (i=1; i<=n; i++){
        cout << tunnit[i];}
    return 0;
}