#include "Vect.h"

// Constrictor de la clase Vect.
Vect::Vect() {
	Fraccion FraccionDefecto(0,1);
	vectorFracciones.push_back(FraccionDefecto);
}

Vect::Vect(vector<Fraccion> Lista) {
	for (int i = 0; i < Lista.size(); i++) {
		vectorFracciones.push_back(Lista[i]);
	}
}

Vect Vect::operator+(Vect Vector2){
  vector <Fraccion> Auxiliar;
  if(vectorFracciones.size() == Vector2.vectorFracciones.size()){
    for(int i = 0; i < vectorFracciones.size();i++){
      Auxiliar.push_back(vectorFracciones[i]+Vector2.vectorFracciones[i]);
    }
  }
  return Vect(Auxiliar);
}
Vect Vect::operator-(Vect Vector2){
  vector <Fraccion> Auxiliar;
  if(vectorFracciones.size() == Vector2.vectorFracciones.size()){
    for(int i = 0; i < vectorFracciones.size();i++){
      Auxiliar.push_back(vectorFracciones[i]-Vector2.vectorFracciones[i]);
    }
  }
  return Vect(Auxiliar);
}
Vect Vect::operator*(Vect Vector2){
  vector <Fraccion> Auxiliar;
  if(vectorFracciones.size() == Vector2.vectorFracciones.size()){
    for(int i = 0; i < vectorFracciones.size();i++){
      Auxiliar.push_back(vectorFracciones[i]*Vector2.vectorFracciones[i]);
    }
  }
  return Vect(Auxiliar);
}

//Producto cruz
Vect Vect::producto(Vect Vector2){
  Vect Auxiliar, Auxiliar1(vectorFracciones);
  Auxiliar.vectorFracciones.erase(Auxiliar.vectorFracciones.begin());
  if(Auxiliar1.vectorFracciones.size() == 3 && Vector2.vectorFracciones.size() == 3){
    Fraccion A;
    for(int i = 0; i < 3;i++){
      A = vectorFracciones[(i+1)%3]*Vector2.vectorFracciones[(i+2)%3] - vectorFracciones[(i+2)%3]*Vector2.vectorFracciones[(i+1)%3];
      Auxiliar.vectorFracciones.push_back(A);
    }
  }
  return Vect(Auxiliar);
}


float Vect::angulo(Vect Vector2){
  float A = NAN;
  if(vectorFracciones.size() == Vector2.vectorFracciones.size()){
    Vect Auxiliar(vectorFracciones);
    Fraccion Auxiliar1;
    for(int i = 0; i < vectorFracciones.size();i++){
      Auxiliar1 = (Auxiliar*Vector2).vectorFracciones[i]+Auxiliar1;
    }
    A = 180*acos(Auxiliar1.getNumerador()/(Auxiliar1.getDenominador()*Auxiliar.magnitud()*Vector2.magnitud()))/3.1415926535897932384626433832795028841971693993751058209749445923;
  }
  return A;
}

float Vect::magnitud(){
  float A = 0;
  Fraccion Auxiliar;
  for(int i = 0; i < vectorFracciones.size();i++){
    Auxiliar = Auxiliar+(vectorFracciones[i]*vectorFracciones[i]);
  }
  A = sqrt(Auxiliar.getNumerador()/Auxiliar.getDenominador())+0.1;
  return A;
}

//Escalamiento
Vect Vect::producto(int escalamiento){
  vector<Fraccion>Auxiliar;
  for (int i=0;i<vectorFracciones.size();i++){
    Auxiliar.push_back(vectorFracciones[i]*Fraccion(escalamiento,1));
  }
  return Vect(Auxiliar);
}

void Vect::print(){
  if(vectorFracciones.size()!=0){
    cout << "[";
	  for(int i = 0; i < vectorFracciones.size()-1; i++) {
		  vectorFracciones[i].printFracc();
      cout << ",";
	  }
    vectorFracciones[vectorFracciones.size()-1].printFracc();
	  cout << "]" << endl << endl;
  }
  else{
    cout << "No soportado." << endl << endl;
  }
}