/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.cpp
 * Author: adils
 * 
 * Created on 8 de outubro de 2021, 11:08
 */

#include "Calculo.h"
#include <iostream>
#include <math.h> 

using namespace std;

Calculo::Calculo() {
}

Calculo::Calculo(const Calculo& orig) {
}

Calculo::~Calculo() {
}

void Calculo::lerDados(){
    
    int dias, meses, anos; 
    
    cout <<"Declara o total de anos: " << endl; 
    cin >> anos; 
    cout <<"declare o total de meses: " << endl; 
    cin >> meses; 
    cout <<"Declare o total de dias: " << endl; 
    cin >> dias; 
}

float Calculo::fazerConta(){
    
   anos=(anos*365); 
   meses=(meses*30); 
   total=dias+meses+anos; 
   
   return total; 
}