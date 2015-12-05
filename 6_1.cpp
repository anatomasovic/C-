#include <iostream>
#include <string>

using namespace std;

class Vlasnik
{
    private:
        string ime, prezime;
    public:
        void setIme(string i) { ime = i; }
        void setPrezime(string p) { prezime = p; }
        string getIme() { return ime; }
        string getPrezime() { return prezime; }
};

class Automobil
{
    private:
        Vlasnik vl;
        string registracija;
    public:
        void setVlasnik(Vlasnik vl, string im, string pr) { vl.setIme(im); vl.setPrezime(pr); }
        void setReg(string r) { registracija = r; }
        string getReg() { return registracija; }
};

int main()
{
    cout<<"Unesi broj vozila: ";
    int br;
    cin>>br;
    string name, surname, reg;
    Automobil *p = new Automobil[br];
    Vlasnik *v = new Vlasnik[br];
    cout<<"Unesi podatke:\n";
    for (int i = 0; i < br; i++)
    {
        cout<<"Vlasnik: "<<endl;
        cin>>name;
        cin>>surname;
        p[i].setVlasnik(v[i], name, surname);
        cout<<"Registracija: ";
        cin>>reg;
        p[i].setReg(reg);
    }
    for (int i = 0; i < br; i++)
    {
        cout<<"Vlasnik: "<<v[i].getIme()<<" ";
        cout<<v[i].getPrezime()<<endl;
        cout<<"Registracija: "<<p[i].getReg()<<endl;
    }
    delete []v;
    delete []p;
    return 0;
}
