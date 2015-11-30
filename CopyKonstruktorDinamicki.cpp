#include <iostream>

using namespace std;

class Klasa
{
    private:
        int a;
    public:
        Klasa() { a = 5; cout<<"Konstruktor..."<<endl; }
        Klasa(Klasa &copyk1) { cout<<"Copy konstruktor..."<<endl; a = copyk1.a; }
        ~Klasa() { cout<<"Destruktor..."<<endl; }
        void setA(int p) { a = p; }
        int getA() { return a; }
};

int main()
{
    Klasa *k = new Klasa;
    cout<<"Vrijednost a u k: "<<k->getA()<<endl;
    Klasa *k2(k); //ovo mozemo zbog copy konstruktora
    cout<<"Vrijednost a u k2: "<<k2->getA()<<endl;
    delete k; //k2 je privremena kopija koja je referenca na k1, pa ne moramo delete k2
    //delete poziva destruktor
    return 0;
}
