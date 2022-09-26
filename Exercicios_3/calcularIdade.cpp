/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calcularIdade.cpp
 * Author: adils
 * 
 * Created on 30 de setembro de 2021, 17:05
 */

#include "calcularIdade.h"
#include <iostream> 
#include <math.h>


using namespace std; 

calcularIdade::calcularIdade() {
}

calcularIdade::calcularIdade(const calcularIdade& orig) {
}

calcularIdade::~calcularIdade() {
}

void calcularIdade::lerDados(){ 
    
    int a, m, d; 
    
    cout<<"Digite sua idada somente em anos "<< endl; 
    cin >> a; 
    cout<<"Digite sua idade somente em meses"<< endl;  
    cin >> m; 
    cout<<"Digite sua idade somente em dias "<< endl;  
    cin >> d; 
}

int calcularIdade::calcularDias(){
    
  d = ( d +(a*365) + (m*30));
           
   return d;   
}