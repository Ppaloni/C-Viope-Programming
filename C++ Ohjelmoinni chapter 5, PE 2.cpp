//C++ Ohjelmoinni chapter 5, PE 2

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    char sukupuoli;
    int ika;

    
    printf("Oletko mies vai nainen (m/n)");
    sukupuoli = getchar();

            
    cout << "Anna ikäsi: ";
    cin >> ika;
    
    if (sukupuoli == 'm' && ika <= 55 && ika >=0)
        printf("Olet mies parhaassa iässä!");
        
    else if (sukupuoli == 'm' && ika > 55 && ika > 101)
        printf("Olet viisas mies!");
    
    else if (sukupuoli == 'n' && ika <= 55 && ika >=0)
        printf("Olet neito kauneimmillaan!");
    
    else if (sukupuoli == 'n' && ika > 55 && ika > 101)
        printf("Olet nuori ikäiseksesi!");
    
    else 
        printf ("Ohjelmassa tapahtunut virhe!");
        
        return 0;
		}