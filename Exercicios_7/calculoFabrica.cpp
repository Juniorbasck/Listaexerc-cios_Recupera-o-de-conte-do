/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calculoFabrica.cpp
 * Author: adils
 * 
 * Created on 8 de outubro de 2021, 16:56
 */

#include "calculoFabrica.h"
#include <iostream>

using namespace std;

calculoFabrica::calculoFabrica() {
}

calculoFabrica::calculoFabrica(const calculoFabrica& orig) {
}

calculoFabrica::~calculoFabrica() {
}

void calculoFabrica::lerDados(){
    
 cout<<"Informe o valor de custo de fabrica" << endl; 
 cin >> vCustoFabrica;    
}

float calculoFabrica::contaFabrica(){
    
 vValorDistribuidor = vCustoFabrica + (vCustoFabrica * vPercDistribuidor / 100); 
 vValorImposto = vCustoFabrica + (vCustoFabrica * vPercImpostos / 100); 
 vCustoConsumidor = vCustoFabrica + vValorDistribuidor + vValorImposto; 
 
 return vCustoConsumidor;   
}