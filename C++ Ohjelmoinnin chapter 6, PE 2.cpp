//C++ Ohjelmoinnin chapter 6, PE 2

#include <iostream>
using namespace std;

int main() 
{
	
	int n;
	long long kertoma = 1;
	
	cout << "Anna kokonaisluku:";
	cin >> n;
	
	for(int i = 1; i <=n; i++){
		
		kertoma *= i;
		
	}
	
	cout << "Luvun " << n << " kertoma on " << kertoma;
	return 0;
}