/*
Angélica Alemán Cabrales - A01246666
Damián Jacob Albino Mejía - A01246716
Jaqueline Denisse Ojeda Torres - A01245411
Mario Javier Cervantes Hernandez - A00711813
*/

#include "Vect.h"

int main(){
  Fraccion FraccionA(-5,2);
  Fraccion FraccionB(8,3);
	Fraccion FraccionC(7,4);
  Fraccion FraccionD(-6,4);
	Fraccion FraccionE(1,-5);
  
  Vect primerVector4({FraccionD,FraccionB,FraccionA,FraccionB});
  Vect segundoVector4({FraccionB,FraccionC,FraccionD,FraccionB});
  Vect primerVector3({FraccionD,FraccionB,FraccionA});
  Vect segundoVector3({FraccionA,FraccionC,FraccionD});

  cout << "---============== Comprobación de Operadores ==============---" << endl;
  primerVector4.print();
  segundoVector4.print();
  cout << "                 ---======== Suma ========---" << endl;
  (primerVector4+segundoVector4).print();
  cout << "                 ---======== resta ========---" << endl;
  (primerVector4-segundoVector4).print();
  cout << "                 ---=== Multiplicación ===---" << endl;
  (primerVector4*segundoVector4).print();
  cout << "                 ---==== Producto cruz ====---" << endl;
  primerVector4.producto(segundoVector4).print();
  cout << "                 ---======= Ángulo =======---" << endl;
  cout << primerVector4.angulo(segundoVector4)  << endl << endl;

  cout << "---============== Comprobación de Operadores ==============---" << endl;
  primerVector3.print();
  segundoVector3.print();
  cout << "                 ---======== Suma ========---" << endl;
  (primerVector3+segundoVector3).print();
  cout << "                 ---======== resta ========---" << endl;
  (primerVector3-segundoVector3).print();
  cout << "                 ---=== Multiplicación ===---" << endl;
  (primerVector3*segundoVector3).print();
  cout << "                 ---==== Producto cruz ====---" << endl;
  primerVector3.producto(segundoVector3).print();
  cout << "                 ---======= Ángulo =======---" << endl;
  cout << primerVector3.angulo(segundoVector3)  << endl << endl;
  
  cout << "---============== Comprobación otros Métodos ==============---" << endl;
  cout << "                 ---====== Magnitud ======---" << endl;
  primerVector4.print();
  cout << primerVector4.magnitud() << endl << endl;
  primerVector3.print();
  cout << primerVector3.magnitud() << endl << endl;
  cout << "                 ---==== Escalamiento ====---" << endl;
  segundoVector4.print();
  segundoVector4.producto(2).print();
  segundoVector3.print();
  segundoVector3.producto(2).print();
  cout << "---=============== Vectores distinto tamaño ===============---" << endl;
  primerVector3.print();
  segundoVector4.print();
  cout << "                 ---======== Suma ========---" << endl;
  (primerVector3+segundoVector4).print();
  cout << "                 ---======== resta ========---" << endl;
  (primerVector3-segundoVector4).print();
  cout << "                 ---=== Multiplicación ===---" << endl;
  (primerVector3*segundoVector4).print();
  cout << "                 ---==== Producto cruz ====---" << endl;
  primerVector3.producto(segundoVector4).print();
  cout << "                 ---======= Ángulo =======---" << endl;
  cout << primerVector3.angulo(segundoVector4)  << endl << endl;
	return 0;
}