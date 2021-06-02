#include "Fraccion.h"

int otroNumerador, otroDenominador;

// Constrictor de la clase Fracción.
Fraccion::Fraccion(){
  numerador = 0;
  denominador = 1;
}

Fraccion::Fraccion(int Numerador, int Denominador){
  if(Denominador<0){
    Denominador = -Denominador;
    numerador = -numerador;
  }
  numerador = Numerador/mcd(Numerador,Denominador);
  denominador = Denominador/mcd(Numerador,Denominador);
}

int Fraccion::getNumerador(){
  return numerador;
}
int Fraccion::getDenominador(){
  return denominador;
}
void Fraccion::setNumerador(int Numerador){
  numerador = Numerador;
}
void Fraccion::setDenominador(int Denominador){
  denominador = Denominador;
}


//Algoritmo de Euclides.
int Fraccion::mcd(int numeradores, int denominadores){
  int elMCD, otroNumeritoParaElMCD, elResiduo;
  elMCD = abs(numeradores);
  otroNumeritoParaElMCD = abs(denominadores);
  while(otroNumeritoParaElMCD>0){
    elResiduo = elMCD % otroNumeritoParaElMCD;
    elMCD = otroNumeritoParaElMCD;
    otroNumeritoParaElMCD = elResiduo;
  }
  return elMCD;
}

Fraccion Fraccion::operator+(Fraccion F2){
  Fraccion F1;
  otroNumerador = numerador*F2.denominador+F2.numerador*denominador;
  otroDenominador = denominador*F2.denominador;
  F1.numerador = otroNumerador/mcd(otroNumerador,otroDenominador);
  F1.denominador = otroDenominador/mcd(otroNumerador,otroDenominador);
  return F1;
}

Fraccion Fraccion::operator-(Fraccion F2){
  Fraccion F1;
  otroNumerador = numerador*F2.denominador-F2.numerador*denominador;
  otroDenominador = denominador*F2.denominador;
  F1.numerador = otroNumerador/mcd(otroNumerador,otroDenominador);
  F1.denominador = otroDenominador/mcd(otroNumerador,otroDenominador);
  return F1;
}

Fraccion Fraccion::operator*(Fraccion F2){
  Fraccion F1;
  otroNumerador =  numerador*F2.numerador;
  otroDenominador = denominador*F2.denominador;
  F1.numerador = otroNumerador/mcd(otroNumerador,otroDenominador);
  F1.denominador = otroDenominador/mcd(otroNumerador,otroDenominador);
  return F1;
}

void Fraccion::printFracc(){
  cout << numerador << "/" << denominador;
}