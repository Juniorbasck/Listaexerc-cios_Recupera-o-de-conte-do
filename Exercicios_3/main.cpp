/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 30 de setembro de 2021, 17:04
 */

#include <cstdlib>
#include <iostream>

#include "calcularIdade.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv){

    calcularIdade obj1; 
    obj1.lerDados(); 
    cout << obj1.calcularDias();
    
    return 0;
}

