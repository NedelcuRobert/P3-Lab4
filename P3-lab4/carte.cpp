#include "carte.h"

void CCarte::set_titlu(string t) {
	titlu = t;
}
void CCarte::set_autor(string a) {
	autor = a;
}

void CCarte::set_editura(string e) {
	editura = e;
}

void CCarte::set_ISBN(string i) {
	ISBN = i;
}

void CCarte::set_an(int y) {
	an = y;
}

void CCarte::set_pret(float p) {
	pret = p;
}

string CCarte::get_titlu() { return titlu; }
string CCarte::get_autor() { return autor; }
string CCarte::get_editura() { return editura; }
string CCarte::get_ISBN() { return ISBN; }
int CCarte::get_an() { return an; }
float CCarte::get_pret() { return pret; }
