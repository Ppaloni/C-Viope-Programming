//C++ Ohjelmoinnin chapter 4, PE 1

#include <iostream>
using namespace std;

int main()
{
	
	int luku;
	int luku2;
	int luvun_summa;
	
	
	cout <<"Syötä ensimmäinen kokonaisluku: ";
	cin >> luku;
	
	cout <<"Syötä toinen kokonaisluku: ";
	cin >> luku2;
	
	
	
	cout << luku << "+" << luku2 << " = "<< luku + luku2 << endl;
	
	cout << luku << "-" << luku2 << " = "<< luku - luku2 << endl;
	
	cout << luku << "*" << luku2 << " = "<< luku * luku2 << endl;
	
	luvun_summa = luku % luku2;
	cout << "Jakojäännös: " << luvun_summa << endl;
	
	
}