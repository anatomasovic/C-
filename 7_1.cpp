#include <iostream>

using namespace std;

class Klasa
{
    private:
        int a;
    public:
        Klasa() { a = 5; cout<<"Konstruktor..."<<endl; }
        ~Klasa() { cout<<"Destruktor..."<<endl; }
        void setA(int p) { a = p; }
        int getA() { return a; }
};


void f1(Klasa k1)
{
    cout<<"a(f1) = "<<k1.getA()<<endl;
    k1.setA(10);
    cout<<"a(f1) = "<<k1.getA()<<endl;
}

int main()
{
    Klasa k;
    cout<<"Poziv f1 (po vrijednosti): "<<endl;
    f1(k);
    cout<<"Vrijednost nakon poziva: "<<k.getA()<<endl;
    return 0;
}

