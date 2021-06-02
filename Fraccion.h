#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>
using namespace std;

// Clase para Fracción.
class Fraccion{
  private:
  // Declaración privada de atributos.
  int numerador, denominador;

  public:
  // Constrictor de la clase Fracción.
  Fraccion();
  Fraccion(int, int);
  Fraccion operator+(Fraccion);
  Fraccion operator-(Fraccion);
  Fraccion operator*(Fraccion);
  
  int mcd(int, int);
  int getNumerador();
  int getDenominador();
  void setNumerador(int);
  void setDenominador(int);

  void printFracc();
};
#endif