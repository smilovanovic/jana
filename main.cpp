#include <iostream>
#include "racionalan_broj.h"
#include "kompleksan_broj.h"

using namespace std;

int main() {
  Broj *niz[2018];

  for (size_t i = 0; i < 2018; i++) {
    if (i < 1009) {
      double a = rand() % 1000 + 1;
      double b = rand() % 1000 + 1;
      niz[i] = new RacionalanBroj(a, b);
    } else {
      niz[i] = new KompleksanBroj(((double) rand() / (RAND_MAX)), ((double) rand() / (RAND_MAX)));
    }
  }

  for (size_t i = 0; i < 2018; i++) {
    niz[i]->Print();
  }
}

// U funkciji main, kreirati po niz od 2018 pointera na objekte tipa broj, od kojih 1009 ukazuju na racionalne a 1009 na kompleksne brojeve
