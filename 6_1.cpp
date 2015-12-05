#include <iostream>
#include <string>

using namespace std;

class Vlasnik
{
	private:
		string *ime;
	public:
		string *prezime;
		void setIme(string ime) { *(this->ime) = ime; }
		void setPrezime(string prezime) { *(this->prezime) = prezime; }
		Vlasnik() { ime = new string; prezime = new string; }
		~Vlasnik() { delete ime, prezime; }
};

class Automobil
{
	public:
		Vlasnik *vl;
		string *reg;
		Automobil() { vl = new Vlasnik; reg = new string; }
		~Automobil() { delete vl, reg; }
};

int main()
{
	cout<<"Unesi broj vozila: ";
	string i, p;
	int br;
	cin>>br;
	Automobil *a = new Automobil[br];
	for (int i = 0; i < br; i++)
	{
		cout<<"Vlasnik automobila: ";
		cin>>i;
		(a+i)->vl->setIme();
	}
	delete []a;
    return 0;
}
