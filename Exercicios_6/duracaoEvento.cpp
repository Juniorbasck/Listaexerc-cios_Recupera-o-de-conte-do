/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   duracaoEvento.cpp
 * Author: adils
 * 
 * Created on 8 de outubro de 2021, 16:21
 */

#include "duracaoEvento.h"
#include <iostream>
#include <cstdlib>

using namespace std; 
duracaoEvento::duracaoEvento() {
}

duracaoEvento::duracaoEvento(const duracaoEvento& orig) {
}

duracaoEvento::~duracaoEvento() {
}

void duracaoEvento::lerdados(){
    
    cout<<"Digite uma quantidade de segundos"<< endl; 
    cin >> segundos; 
}

float duracaoEvento::converter(){
    
    H = segundos/3600; 
    resto = segundos % 3600;
    M = resto / 60; 
    S = resto % 60; 
    
    return H, M, S; 
}