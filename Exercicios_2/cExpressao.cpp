/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cExpressao.cpp
 * Author: adils
 * 
 * Created on 30 de setembro de 2021, 15:34
 */

#include "cExpressao.h"
#include <iostream>
#include <math.h>


using namespace std; 
cExpressao::cExpressao() {
}

cExpressao::cExpressao(const cExpressao& orig) {
}

cExpressao::~cExpressao() {
}

void cExpressao::lerDados(){
     
    int A, B, C; 
    
    cout<<"Digite O valor de A" << endl; 
    cin >> A;
    cout<<"Digite O valor de B" << endl; 
    cin >> B;
    cout<<"Digite O valor de C" << endl; 
    cin >> C;
    
}
float cExpressao::calcularExpressao(){
    
    R = pow((A + B),2); 
    S = pow((B + C),2); 
    D = (R + S) / 2; 
    
    return D;        
}