#include "broj.h"

class RacionalanBroj : public Broj
{
  double a, b;
  virtual double vrati_vrednost();
public:
  RacionalanBroj(double a, double b);
  virtual void Print();
};
