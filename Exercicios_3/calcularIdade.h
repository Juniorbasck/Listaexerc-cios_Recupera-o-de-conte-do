/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calcularIdade.h
 * Author: adils
 *
 * Created on 30 de setembro de 2021, 17:05
 */

#ifndef CALCULARIDADE_H
#define CALCULARIDADE_H

class calcularIdade {
public:
    calcularIdade();
    calcularIdade(const calcularIdade& orig);
    virtual ~calcularIdade();
    
    int a, m, d; 
    void lerDados(); 
    int  calcularDias(); 
    
    
private:

};

#endif /* CALCULARIDADE_H */

