#include "asociata.h"


void CAsociata::set_b(CBiblioteca d) {
	b = d;
}

CBiblioteca CAsociata::get_b() { return b; }

int CAsociata::unicitate_isbn(int n) {
	for (int i = 0;i < n - 1;i++) {
		for (int j = i + 1;j < n;j++) {
			if (b.carti[i].get_ISBN() == b.carti[j].get_ISBN()) {
				return false;
			}
		}
	}
	return true;
}
