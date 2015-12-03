#include <iostream>

using namespace std;

class Klasa
{
    public:
        void f() { cout<<"Klasa..."<<endl; }
        virtual void vf() { cout<<"Klasa virtual..."<<endl; }
};

class Podklasa : public Klasa
{
    public:
        virtual void f() { cout<<"Podklasa..."<<endl; }
};

class PodklasaV : public Klasa
{
    public:
        void vf() { cout<<"Podklasa virtual..."<<endl; }
};

int main()
{
    Klasa *k = new Klasa;
    Podklasa *pk = new Podklasa;
    k->f();
    pk->f();

    Klasa *kpk = new Podklasa; // Pokazivacu Klasa smo dodjelili objekt Podklasa
    kpk->f();

    Klasa *kpv = new PodklasaV;
    kpv->vf();

    delete k, pk, kpk, kpv;
    return 0;
}
