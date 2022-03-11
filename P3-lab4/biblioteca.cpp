#include "biblioteca.h"
#include <iostream>

using namespace std;

void CBiblioteca::initializare_carti(int n) {
	for (int i = 0;i < n;i++) {
		cout << "Cartea " << i + 1 << endl;
		string titlu, autor, editura, isbn;
		int an;
		float pret;
		cout << "Titlu:";
		cin >> titlu;
		cout << "Autor:";
		cin >> autor;
		cout << "Editura:";
		cin >> editura;
		cout << "ISBN:";
		cin >> isbn;
		cout << "An:";
		cin >> an;
		cout << "Pret:";
		cin >> pret;
		carti[i].set_titlu(titlu);
		carti[i].set_autor(autor);
		carti[i].set_editura(editura);
		carti[i].set_ISBN(isbn);
		carti[i].set_an(an);
		carti[i].set_pret(pret);
	}
}

void CBiblioteca::afisare_carti(int n) {
	for (int i = 0;i < n;i++) {
		cout << "Cartea " << i + 1 << endl;
		cout << "Titlu:" << carti[i].get_titlu() << endl;
		cout << "Autor:" << carti[i].get_autor() << endl;
		cout << "Editura:" << carti[i].get_editura() << endl;
		cout << "ISBN:" << carti[i].get_ISBN() << endl;
		cout << "An:" << carti[i].get_an() << endl;
		cout << "Pret:" << carti[i].get_pret() << endl;
	}
}

void CBiblioteca::cautare_carte(int n) {
	string nume, editura, isbn;
	int ch;
	do {
		cout << "\n1.Cautare dupa nume\n2.Cautare dupa editura\n3.Cautare dupa ISBN\n4.Iesire\n";
		cout << "\n\nOptiunea dvs:";
		cin >> ch;
		switch (ch) {
		case 1:cout << "Nume pentru cautare:";
			cin >> nume;
			for (int i = 0;i < n;i++) {
				if (carti[i].get_titlu() == nume) {
					cout << "\nCartea se afla in stocul bibliotecii\n\n";
					cout << "\nTitlu:" << carti[i].get_titlu();
					cout << "\nAutor:" << carti[i].get_autor();
					cout << "\nEditura:" << carti[i].get_editura();
					cout << "\nISBN:" << carti[i].get_ISBN();
					cout << "\nAnul aparitiei:" << carti[i].get_an();
					cout << "\nPret:" << carti[i].get_pret();
					cout << "\n-------------\n";
				}
			}
			break;
		case 2:cout << "Editura pentru cautare:";
			cin >> editura;
			for (int i = 0;i < n;i++) {
				if (carti[i].get_editura() == editura) {
					cout << "\nCartea se afla in stocul bibliotecii\n\n";
					cout << "\nTitlu:" << carti[i].get_titlu();
					cout << "\nAutor:" << carti[i].get_autor();
					cout << "\nEditura:" << carti[i].get_editura();
					cout << "\nISBN:" << carti[i].get_ISBN();
					cout << "\nAnul aparitiei:" << carti[i].get_an();
					cout << "\nPret:" << carti[i].get_pret();
					cout << "\n-------------\n";
				}
			}
			break;
		case 3:cout << "ISBN pentru cautare:";
			cin >> isbn;
			for (int i = 0;i < n;i++) {
				if (carti[i].get_ISBN() == isbn) {
					cout << "\nCartea se afla in stocul bibliotecii\n\n";
					cout << "\nTitlu:" << carti[i].get_titlu();
					cout << "\nAutor:" << carti[i].get_autor();
					cout << "\nEditura:" << carti[i].get_editura();
					cout << "\nISBN:" << carti[i].get_ISBN();
					cout << "\nAnul aparitiei:" << carti[i].get_an();
					cout << "\nPret:" << carti[i].get_pret();
					cout << "\n-------------\n";
				}
			}
			break;
		default: cout << "Introduceti o optiune valida!!";
		case 4:exit(1);
		}
	} while (1);
}
