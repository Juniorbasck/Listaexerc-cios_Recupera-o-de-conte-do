/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cExpressao.h
 * Author: adils
 *
 * Created on 30 de setembro de 2021, 15:34
 */

#ifndef CEXPRESSAO_H
#define CEXPRESSAO_H

class cExpressao {
public:
    cExpressao();
    cExpressao(const cExpressao& orig);
    virtual ~cExpressao();
    
    int A, B, C, R, S; 
    float D; 
    //objativo: declarar atributos e metodos 
    void lerDados(); 
    float calcularExpressao();
    
private:

};

#endif /* CEXPRESSAO_H */

