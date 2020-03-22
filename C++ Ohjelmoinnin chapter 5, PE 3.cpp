//C++ Ohjelmoinnin chapter 5, PE 3

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

	int laskutoimitus;
	cout << "Käytössäsi on seuraavat laskutoimitukset: " << endl;
	cout << "1: vähennyslasku"<< endl;
	cout << "2: yhteenlasku"<< endl;
	cout << "3: kertolasku"<< endl;
	cout << "4: osamäärä"<< endl;
	cout << "5: jakojäännös"<< endl;
	cout << "Valitse laskutoimitus:";
	cin >> laskutoimitus;

	int luku;
	int luku2;
	cout << "Anna eka luku:";
	cin >> luku;
	
	cout << "Anna toinen luku:";
	cin >> luku2;
	
	if(laskutoimitus == 1)
		cout << luku << "-" << luku2 << "=";
	else if(laskutoimitus == 2)
		cout << luku << "+" << luku2 << "=";
	else if(laskutoimitus == 3)
		cout << luku << "*" << luku2 << "=";
	else if(laskutoimitus == 4)
		cout << luku << "/" << luku2 << "=";
	else if(laskutoimitus == 5)
		cout << luku << "%" << luku2 << "=";
	
	
	switch(laskutoimitus)
	{
		case 1: 
			cout << luku - luku2;
		break;
		case 2:
			cout << luku + luku2;
		break;
		case 3:
			cout << luku * luku2;
		break;
		case 4:
			cout << luku / luku2;
		break;
		case 5:
			cout << luku % luku2;
		break;
	
	}
}