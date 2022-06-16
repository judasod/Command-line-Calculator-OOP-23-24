#include <iostream>
#include <string>
#include "EqParser.h"
#include "Numar.h"

using namespace std;


void main()
{
	EqParser a = EqParser();
	char e[] = "10+2-7+4*4/2";
	char e2[] = "[( 9+10)^2 + 1] + 112";

	EqParser b = EqParser(e, 0, 0);
	b.set_ecuatie(nullptr);
	cout << b.get_ecuatie() << endl;

	a.set_ecuatie(e2);
	cout << a.get_ecuatie() << endl;
	//a.set_ecuatie(0);
	a.parse();

	// Testare caz NULL
	EqParser d;
	//d.parse();

	// Testare constructori de copiere pentru campurile alocate dinamic

	//Clasa EqParsor
	EqParser c = a;
	cout << strcmp(c.get_ecuatie(), a.get_ecuatie());
	cout << strcmp(c.get_paranteze(), a.get_paranteze());
	cout << endl;


	//Clasa Numar
	Numar n(2, 3, 4);
	
	float arr[5] = { 1999992, 2200020, 11724, 233234, 9999999 };
	float* aa = arr;
	n.setLogEroare(aa, 5);

	float* t = n.getLogEroare();
	for (int i = 0; i < n.getNrErori(); i++)
		printf("%.3f  ", t[i]);		//cout << t[i]<<" ";

	cout << endl;
	Numar m = n;
	Numar z;
	z = m;
	float* test = z.getLogEroare();
	for (int i = 0; i < z.getNrErori(); i++)
		if(test[i] == t[i])
			cout<<"1 ";
	
	m.resetErori();
	if(m.getOk() == true) cout <<"OK"<< endl;

	//operatori  <<
	// cout << z;
	// cout << b;

}
