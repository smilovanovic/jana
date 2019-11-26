#include "broj.h"

class KompleksanBroj : public Broj
{
  double a, b;
  virtual double vrati_vrednost();
public:
  KompleksanBroj(double a, double b);
  virtual void Print();
};
