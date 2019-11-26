#pragma once

class Broj
{
protected:
  char* vrsta;
  double vrednost;
  virtual double vrati_vrednost();
  virtual void postavi_vrednost(double vrednost);
public:
  double poredi(Broj drugi);
  virtual void Print();
};
