//C+ Ohjelmoinnin chapter 3, PE 2

#include <iostream>
using namespace std;

int main()
{
	
	int luku;
	double luvun_summa;
	double r;
	
	cout <<"Anna ympyrän säde: ";
	cin >> luku;
	
	r = luku * luku;
	
	luvun_summa = 3.142 * r;
	cout << "Ympyrän ala annetulla säteellä: " << luvun_summa << endl;
	
	
}