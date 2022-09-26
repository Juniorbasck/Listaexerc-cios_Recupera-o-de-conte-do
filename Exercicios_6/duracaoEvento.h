/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   duracaoEvento.h
 * Author: adils
 *
 * Created on 8 de outubro de 2021, 16:21
 */

#ifndef DURACAOEVENTO_H
#define DURACAOEVENTO_H

class duracaoEvento {
public:
    
    int segundos, H, M, S, resto; 
    
    duracaoEvento();
    duracaoEvento(const duracaoEvento& orig);
    virtual ~duracaoEvento();
    
    void lerdados(); 
    float converter(); 
    
private:

};

#endif /* DURACAOEVENTO_H */

