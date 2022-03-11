
#include <string>
#include <iostream>

using namespace std;

class CCarte
{
private:
	string titlu;
	string autor;
	string editura;
	string ISBN;
	int an;
	float pret;
public:
	void set_titlu(string t);
	void set_autor(string a);
	void set_editura(string e);
	void set_ISBN(string i);
	void set_an(int y);
	void set_pret(float p);

	string get_titlu();
	string get_autor();
	string get_editura();
	string get_ISBN();
	int get_an();
	float get_pret();
};