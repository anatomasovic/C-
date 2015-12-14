#include <iostream>
#include <vector>

using namespace std;

class Vozilo
{
private:
  int godiste;
public:
  void setGodiste() { int god; cin>>god; godiste = god; }
  int getGodiste() { return godiste; }
  int izracunajStarost() { return 2015 - godiste; }
};

class Automobil : public Vozilo
{
public:
  int snaga;
};

class Kamion : public Vozilo
{
public:
  int visina; 
};

int main()
{
  cout<<"Unesi broj automobila: \n";
  int a;
  cin>>a;
  cout<<"Unesi broj kamiona: \n";
  int k;
  cin>>k;
  vector <Automobil> va(a);
  vector <Kamion> vk(k);
  cout<<"Unos podataka za automobile..."<<endl;
  for (int i = 0; i < va.size(); i++)
    {
      cout<<"Snaga: ";
      cin>>va.at(i).snaga;
      cout<<"Godiste: ";
      cin>>god;
      cin>>va.at(i).setGodiste();
    }
  cout<<"Unos podataka za kamione..."<<endl;
  for (int i = 0; i < vk.size(); i++)
    {
      cout<<"Visina: ";
      cin>>vk.at(i).visina;
      cout<<"Godiste: ";
      cin>>vk.at(i).setGodiste();
    }
  cout<<"Ispis podataka za automobile..."<<endl;
  for (int i = 0; i < va.size(); i++)
    {
      cout<<"Snaga: ";
      cout<<va.at(i).snaga<<endl;
      cout<<"Starost: ";
      cout<<va.at(i).izracunajStarost()<<endl;
    }
  return 0;
}
