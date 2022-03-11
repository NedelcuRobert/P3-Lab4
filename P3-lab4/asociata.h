#include "biblioteca.h"

class CAsociata
{
private:
	CBiblioteca b;
public:
	void set_b(CBiblioteca d);
	CBiblioteca get_b();
	int unicitate_isbn(int n);
};

