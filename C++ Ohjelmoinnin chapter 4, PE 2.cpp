//C++ Ohjelmoinnin chapter 4, PE 2

#include <iostream>
#include <cmath>
using namespace std;

int main()
	{
	
	int luku;
	int luku2;
	double luku3;
	double luku4;
	double luku5;
	
	
	cout << "Anna ensimmäinen kateetti: " ;
	cin >> luku;
	
	cout << "Anna toinen kateetti: " ;
	cin >> luku2;
	
	luku3 = luku *luku;
	luku4 = luku2 * luku2;
	luku5 = luku3 + luku4;
	
	float juuri = sqrt(luku5);
	
	cout << "Hypotenuusan pituus: " << juuri << endl;
	
}