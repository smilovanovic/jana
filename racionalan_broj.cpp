#include <iostream>
#include "racionalan_broj.h"

using namespace std;

RacionalanBroj::RacionalanBroj(double a, double b)
{
  vrsta = "RacionalanBroj";
  this->a = a;
  this->b = b;
}

double RacionalanBroj::vrati_vrednost()
{
  return this->a / this->b;
}

void RacionalanBroj::Print()
{
  cout << "vrsta = " << this->vrsta << endl;
  cout << "vrednost = " << this->vrati_vrednost() << endl;
}
