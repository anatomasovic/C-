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

Klasa &f3(Klasa &k1)
{
    cout<<"a(f3) = "<<k1.getA()<<endl;
    k1.setA(30);
    cout<<"a(f3) = "<<k1.getA()<<endl;
    return k1;
}

int main()
{
    Klasa k;
    cout<<"Poziv f3 (vraca vrijednost): "<<endl;
    f3(k);
    cout<<"Vrijednost nakon poziva f3: "<<k.getA()<<endl;
    return 0;
}
