#include "asociata.h"


int main() {

    CBiblioteca biblioteca;

    CAsociata b;

    int ch, nr_carti = 0;

    do {
        cout << "\nBiblioteca" << endl;
        cout << "\n1.Adaugare carti\n2.Afisare carti biblioteca\n3.Cautare\n4.Unicitate\n5.Iesire\n";
        cout << "\n\nOptiunea dvs:";
        cin >> ch;
        switch (ch)
        {
        case 1: cout << "Numarul de carti:";
            cin >> nr_carti;
            biblioteca.initializare_carti(nr_carti);
            break;
        case 2:
            biblioteca.afisare_carti(nr_carti);
            break;
        case 3:
            biblioteca.cautare_carte(nr_carti);
            break;
        case 4:
            b.set_b(biblioteca);
            if (b.unicitate_isbn(nr_carti) == 1) {
                cout << "ISBN unic";
            }
            else {
                cout << "ISBN nu este unic";
            }
            break;
        default: cout << "Introduceti o optiune valida!!";
        case 5: exit(1);
        }
    } while (1);

    return 0;
}