/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cAluno.cpp
 * Author: adils
 * 
 * Created on 8 de outubro de 2021, 11:55
 */

#include "cAluno.h"
#include <iostream>
#include <math.h>

using namespace std; 

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDados(){
    
   cout<<"Digite a primeira nota" << endl; 
   cin >> n1; 
   cout<<"Digite a primeira nota" << endl; 
   cin >> n2; 
   cout<<"Digite a primeira nota" << endl; 
   cin >> n3; 
 
}

float cAluno::mediaPonderada(){ 
    
    float media; 
    
   media = (n1*5 + n2*3 + n3*2)/10;  
   
   return media;  
}