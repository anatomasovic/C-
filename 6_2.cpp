#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        string *oib;
    public:
        void SetOib(string o) { oib = new string; *oib = o; }
        string getOib() { return *oib; }
};

class Redovan : public Student
{
    public:
        int *potpora;
        Redovan() { potpora = new int; *potpora = 5000; }
        int getPotpora() { return *potpora; }    
};

class Izvanredan : public Student
{
    public:
        int *placanje;
        Izvanredan() { placanje = new int; *placanje = 6000; }
        int getPlacanje() { return *placanje; }
};

int main()
{
    int red, vanred;
    string oib, pot, pla;
    cout<<"Unesi broj redovnih:\n";
    cin>>red;
    cout<<"Unesi broj izvanrednih:\n";
    cin>>vanred;
    Redovan *r = new Redovan[red];
    Izvanredan *iz = new Izvanredan[vanred];
    for (int i = 0; i < red; i++)
    {   
        cout<<"OIB redovni: ";
        cin>>oib;
        r[i].SetOib(oib);
    }
    for (int i = 0; i < vanred; i++)
    {
        cout<<"OIB vanredni: ";
        cin>>oib;
        iz[i].SetOib(oib);
    }
    for (int i = 0; i < red; i++)
    {
        cout<<"Uneseni OIB redovni: ";
        cout<<r[i].getOib()<<endl;
        cout<<"Placanje: ";
        cout<<r[i].getPotpora()<<endl;
    }
    return 0;
}
