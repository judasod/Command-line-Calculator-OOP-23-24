#include <iostream>
#include <string>
#include "Numar.h"
#include "EqParser.h"
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
	// Testare constructor de copiere pentru campuri alocate dinamic
	// Clasa eqparsor
	EqParser c = a;
	cout << strcmp(c.get_ecuatie(), a.get_ecuatie());
	cout << strcmp(c.get_paranteze(), a.get_paranteze());
	cout << endl<<endl;


	// Clasa numar
	Numar n(12, 3, 14);
	
	float arr[5] = { 199992, 2200020, 11724, 2332401, 9999999 };
	float* aa = arr;
	n.setLogEroare(aa, 5);
	
	int i;
	float* t = n.getLogEroare();
	for (i = 0; i < n.getNrErori(); i++)
		printf("%.30f  ", t[i]);		
	//cout << t[i]<<" ";
	cout << endl;
	
	
	Numar m = n;
	Numar z;
	z = m;
	float* test = z.getLogEroare();
	for (int i = 0; i < z.getNrErori(); i++)
		if(test[i] == t[i])
			cout<<"1 ";
	
	
	m.resetErori();
	if(m.getOK() == true)	cout <<"OK"<< endl;

	// operator<<
	// cout << z;
	// cout << b;
}

