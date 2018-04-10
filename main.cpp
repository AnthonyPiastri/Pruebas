/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tecnologo
 *
 * Created on 10 de abril de 2018, 12:31 PM
 */

#include <cstdlib>
#include "MiClase.h"
using namespace std;

/*
 * 
 
int main(int argc, char** argv) {

    return 0;
} */

int main(){ 
    
 MiClase m1(10); 
 MiClase m2=m1; 
 MiClase m3=30; 
 MiClase M[5]={m1,m2,m3,m1}; 
 MiClase * pm; 
 pm = new MiClase[2]; 
 for (int i=0; i<5;i++) 
  cout << M[i].getDato() << " "; 
 cout << '\n'; 
 delete []pm; 
 cout << '\n'; 
 cout << "antes de la asignacion" << '\n'; 
 m2=m1; 
 cout << "despues de la asignacion" << '\n'; 
 cout << '\n'; 
 cout << "Antes de invocar a funcion1" << '\n'; 
 m1.funcion1(m3); 
 cout << "Despues de invocar a funcion1" << '\n'; 
 cout << '\n'; 
 cout << "Antes de invocar a funcion2" << '\n'; 
 m1.funcion2(m3); 
 cout << "Despues de invocar a funcion2" << '\n'; 
 cout << '\n'; 
 cout << "Antes de invocar a funcion3" << '\n'; 
 m2=m1.funcion3(m3); 
 cout << "Despues de invocar a funcion3" << '\n'; 
 cout << '\n'; 
 cout << "Antes de invocar a funcion4" << '\n'; 
 m2=m1.funcion4(m3); 
 cout << "Despues de invocar a funcion4" << '\n'; 
 cout << '\n'; 
 return 0; 
} 

