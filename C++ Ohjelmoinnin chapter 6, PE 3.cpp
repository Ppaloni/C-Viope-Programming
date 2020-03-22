//C++ Ohjelmoinnin chapter 6, PE 3

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main ()
{
    
    int num;
    float sum=0;
    float n=0;
    
        
    
    
    cout << "Ohjelma laskee koearvosanojen keskiarvon." << endl;
    cout << "Lukujen syöttämisen lopetus negatiivisella luvulla." << endl;
    
    
    while (num != 0) {
        printf("Anna arvosana (4-10)");
        scanf("%d", &num);    
        if (num < 0) {
            break;
        }
        
        else{
            sum=sum+num;
            n++;
        }
    }
    
    float media = (sum/n);
	cout <<"Ohjelmaan syötetty " << n << " arvosanaa." << endl;
    cout <<"Arvosanojen keskiarvo: " << media;
    return 0;



}

