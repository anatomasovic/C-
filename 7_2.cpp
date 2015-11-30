#include <iostream>

using namespace std;

class Klasa
{
    private:
        int a;
    public:
        Klasa() { a = 5; }
        ~Klasa() {}
        void setA(int p) { a = p; }
        int getA() { return a; }
};


int main()
{
    Klasa k;
    Klasa &refK = k;
    
    
    /*cout<<"Prije promjene: ";
    cout<<refK.getA()<<endl;
    cout<<k.getA()<<endl;
    refK.setA(10);
    cout<<"Nakon promjene: ";
    cout<<refK.getA()<<endl;
    cout<<k.getA()<<endl;*/
    
    
    return 0;
}
