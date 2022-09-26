/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 8 de outubro de 2021, 11:03
 */

#include <cstdlib>
#include <iostream>

#include "Calculo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Calculo obj1; 
    obj1.lerDados();
    cout <<obj1.fazerConta(); 
    
    return 0;
}

