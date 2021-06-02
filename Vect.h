#ifndef Vect_H
#define Vect_H
#include <vector>
#include "math.h"
#include "Fraccion.h"

// Clase para Vect.
class Vect{
  private:
  // Declaración privada de atributos.
  vector <Fraccion> vectorFracciones;

  public:
  // Constrictor de la clase Vect.
  Vect();
  Vect(vector<Fraccion>);
  Vect operator+(Vect);
  Vect operator-(Vect);
  Vect operator*(Vect);
  
  Vect producto(Vect);
  float angulo(Vect);
  float magnitud();
  Vect producto(int);
  void print();
};
#endif