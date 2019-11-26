#include <iostream>
#include "broj.h"

using namespace std;

double Broj::poredi(Broj drugi)
{
  return vrati_vrednost() - drugi.vrati_vrednost();
}

double Broj::vrati_vrednost()
{
  return this->vrednost;
}

void Broj::postavi_vrednost(double vrednost)
{
  this->vrednost = vrednost;
}

void Broj::Print()
{
  cout << "vrsta = " << this->vrsta << endl;
  cout << "vrednost = " << this->vrati_vrednost() << endl;
}
