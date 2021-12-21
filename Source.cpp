#include <iostream>
#include <string>
#include "EqParser.h"

using namespace std;


void main()
{
	EqParser a = EqParser();
	char e[] = "10+2-7+4*4/2";
	char e2[] = "[( 9+10)^2 + 1] + 112";

	EqParser b = EqParser(e, 0, 0);
	b.set_ecuatie(nullptr);
	cout<<b.get_ecuatie()<<endl;

	a.set_ecuatie(e2);
	cout << a.get_ecuatie()<<endl;
	//a.set_ecuatie(0);
	a.parse();
	
	// Testare caz NULL
	EqParser d;
	//d.parse();

	// Testare constructor de copiere;
	EqParser c = a;
	cout << strcmp(c.get_ecuatie(), a.get_ecuatie());
	cout << strcmp(c.get_paranteze(), a.get_paranteze());
	//operatori  <<


}