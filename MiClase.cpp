/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MiClase.cpp
 * Author: tecnologo
 * 
 * Created on 10 de abril de 2018, 12:32 PM
 */

#include "MiClase.h"
/*
MiClase::MiClase() {
}

MiClase::MiClase(const MiClase& orig) {
}

MiClase::~MiClase() {
}
*/

MiClase::MiClase(){ 
dato = 0; 
cout << "Soy el constructor por defecto  "; 
cout << " Mi Dato es " << dato << '\n'; 
} 
MiClase::MiClase(int i){ 
dato = i; 
cout << "Soy el constructor comun "; 
cout << " Mi dato es " << dato << '\n'; 
} 
MiClase::MiClase(const MiClase &m){ 
dato = m.dato; 
cout << "Soy el constructor de copia "; 
cout << " Mi Dato es " << dato << '\n'; 
} 
MiClase::~MiClase(){ 
cout << "Soy el destructor "; 
cout << " Mi dato era " << dato << '\n'; 
} 
MiClase MiClase::operator=(MiClase m){ 
dato = m.dato; 
cout << "Soy el operador de asignacion" << '\n'; 
return *this; 
} 
int MiClase::getDato(){ 
return dato; 
} 
void MiClase::funcion1(MiClase m){ 
MiClase local(5); 
cout << "Esta es la funcion 1 " << '\n'; 
cout << '\t' <<" El dato del objeto local es " << local.dato << '\n'; 
cout << '\t' << " El dato del objeto implicito es " << dato << '\n'; 
cout << '\t' << " El dato del parametro es " << m.dato << '\n'; 
} 
void MiClase::funcion2(MiClase &m){ 
cout << " Esta es la funcion 2" << '\n'; 
} 
MiClase MiClase::funcion3(MiClase m){ 
MiClase local; 
local.dato = m.dato * dato; 
cout << "Esta es la funcion 3 " << '\n'; 
cout << '\t' << " El dato del objeto local es " << local.dato << '\n'; 
return local; 
} 
MiClase MiClase::funcion4(MiClase m){ 
       MiClase local(MiClase(10)); 
cout << "Esta es la funcion 4 " << '\n'; 
return local; 
} 