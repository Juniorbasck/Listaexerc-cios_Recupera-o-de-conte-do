/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.h
 * Author: adils
 *
 * Created on 8 de outubro de 2021, 11:08
 */

#ifndef CALCULO_H
#define CALCULO_H

class Calculo {
public:
    Calculo();
    Calculo(const Calculo& orig);
    virtual ~Calculo();
    
    int dias, meses, anos; 
    float D; 
    int total=0; 
    
    void lerDados();
    float fazerConta(); 
    
private:

};

#endif /* CALCULO_H */

