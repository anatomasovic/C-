#include <iostream>

using namespace std;

class Tocka
{
    private:
        int *x, *y;
    public:
        Tocka() { x = new int; *x = 0; y = new int; *y = 0; }
        //Tocka(Tocka &copykonst) { x = copykonst.x; y = copykonst.y; }
        ~Tocka() { delete x; delete y; }
        void setX(int x2) { *x = x2; }
        void setY(int y2) { *y = y2; }
        int getX() { return *x; }
        int getY() { return *y; }
};

class Kruznica
{
    private:
        int *polumjer;
        Tocka *centar;
    public:
        Kruznica() { polumjer = new int; *polumjer = 0; centar = new Tocka; }
        Kruznica(Kruznica &copykonst) { polumjer = copykonst.polumjer; centar = copykonst.centar; }
        ~Kruznica() {delete polumjer; delete centar; }
        int getPolumjer() { return *polumjer; }
        Tocka getCentar() { return *centar; }

};

int main()
{
    Kruznica *kr = new Kruznica;
    cout<<"Polumjer: "<<kr->getPolumjer()<<endl;
    cout<<kr->getCentar().getX()<<endl;
    cout<<kr->getCentar().getY();
    return 0;
}
