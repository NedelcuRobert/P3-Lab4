#include "carte.h"

#define MAX 20

class CBiblioteca
{
private:
	CCarte carti[MAX];
public:
	void initializare_carti(int n);
	void afisare_carti(int n);
	void cautare_carte(int n);

	friend class CAsociata;
};

