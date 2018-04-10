/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MiClase.h
 * Author: tecnologo
 *
 * Created on 10 de abril de 2018, 12:32 PM
 */
#include <iostream> 
using namespace std; 
#ifndef MICLASE_H
#define MICLASE_H

class MiClase {
public:
    MiClase();
    MiClase(const MiClase& orig);
    //virtual ~MiClase();
    ~MiClase();
    MiClase(int);
    
    MiClase operator=(MiClase); 
    // operador de asignación
    int getDato(); 
    // selectora de “dato”
    void funcion1(MiClase); 
    void funcion2(MiClase &); 
    MiClase funcion3(MiClase); 
    MiClase funcion4(MiClase); 
    
private:
    int dato;
};

#endif /* MICLASE_H */

