#include <iostream>

using namespace std;

class Let
{
    private:
        int polazak;
    public:
        int brleta;
        Let() { brleta = 100; polazak = 2; }
        void setPolazak(int br) { polazak -= br; }
        int getPolazak() { return polazak; }
        virtual void odgoda() { cout<<"Avion polijece prema rasporedu."<<endl; }
};

class Domaci : public Let
{
    public:
        char prognoza;
        void setPrognoza(char ch) { prognoza = ch; }
        virtual void odgoda() { if(prognoza == '-') { setPolazak(1); } }
};

class Inozemni : public Let
{
    public:
        virtual void odgoda() {
            int br;
            cout<<"Za koliko sati se odgadja let?"<<endl;
            cin>>br;
            setPolazak(br);
            };
};


int main()
{
    int brd, bri;
    cout<<"Unesi broj domacih letova: "<<endl;
    cin>>brd;
    cout<<"Unesi broj inozemnih letova: "<<endl;
    cin>>bri;
    cout<<"Unos podataka za domace letove..."<<endl;
    cout<<"Prognoza: "<<endl;
    char znak;
    cin>>znak;
    Domaci *dom = new Domaci;
    dom->setPrognoza(znak);
    cout<<"Domaci polazak: "<<dom->getPolazak()<<endl;
    cout<<"Unos podataka za inozemne letove..."<<endl;
    Inozemni *ino = new Inozemni;
    ino->odgoda();
    return 0;
}
