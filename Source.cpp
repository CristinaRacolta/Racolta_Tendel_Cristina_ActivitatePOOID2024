#define CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Carte {

	const int id;
private:
	char* autor;
protected:
	string editura;
public:
	float pret;
	
public:

	Carte() :id(1) {
		autor = new char[strlen("Autor") + 1];
		strcpy(autor, "Autor");
		editura = "Aramis";
		pret = 9.99;

	}

	Carte(const int id, char* autor, string editura, float pret) :id(id) {
		this->autor = new char[strlen(autor) + 1];
		strcpy(this->autor, autor);
		editura = editura;
		this->pret = pret;


	}
	//constructor
	Carte(const Carte& c) :id(c.id) {
		this->autor = new char[strlen(c.autor) + 1];
		strcpy(this->autor, autor);
		this->editura = c.editura;
		this->pret = c.pret;
	}
	//destructor
	~Carte() {
		if (this->autor != NULL) {
			delete[]autor;
		}
		this->autor = new char[strlen(c.autor) + 1];
		strcpy(this->autor, autor);
		this->editura = c.editura;
		this->pret = c.pret; 
		return *this;

	}
	Carte(const Carte& c) :id(c.id) {
		this->autor = new char[strlen(c.autor) + 1];
		strcpy(this->autor, autor);
		this->editura = c.editura;
		this->pret = c.pret;
	}
	
	Carte() {
		if (this->autor != NULL) {
			delete[]autor;
		}
		this->autor = new char[strlen(c.autor) + 1];
		strcpy(this->autor, autor);
		this->editura = c.editura;
		this->pret = c.pret;
		return *this;
	}
	friend ostream& operator<<(ostream& out, Carte& c) {
		out << c.id << endl;
		out << c.autor << endl;
		out << c.editura << endl;
		out << c.pret << endl;

	}
};

void main() {
	Carte b;
	//cout << b.id;
	//cout << b.autor;
	//cout << b.editura;
	//cout << b.pret;
}