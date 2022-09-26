/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calculoFabrica.h
 * Author: adils
 *
 * Created on 8 de outubro de 2021, 16:56
 */

#ifndef CALCULOFABRICA_H
#define CALCULOFABRICA_H

class calculoFabrica {
public:
    
    int vPercDistribuidor; 
    int vPercImpostos; 
    
    float vCustoFabrica, vValorDistribuidor, vValorImposto, vCustoConsumidor;  
    
    calculoFabrica();
    calculoFabrica(const calculoFabrica& orig);
    virtual ~calculoFabrica();
    
    void lerDados;
    float contaFabrica; 
    
private:

};

#endif /* CALCULOFABRICA_H */

