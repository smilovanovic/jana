#include <iostream>
#include <math.h>
#include "kompleksan_broj.h"

using namespace std;

KompleksanBroj::KompleksanBroj(double a, double b)
{
  vrsta = "KompleksanBroj";
  this->a = a;
  this->b = b;
}

double KompleksanBroj::vrati_vrednost()
{
  return sqrt(a*a + b*b);
}

void KompleksanBroj::Print()
{
  cout << "vrsta = " << this->vrsta << endl;
  cout << "vrednost = " << this->vrati_vrednost() << endl;
}
