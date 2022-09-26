/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calcDistanciaEuclidiana.h
 * Author: adils
 *
 * Created on 30 de setembro de 2021, 11:42
 */

#ifndef CALCDISTANCIAEUCLIDIANA_H
#define CALCDISTANCIAEUCLIDIANA_H

class calcDistanciaEuclidiana {
public:
    calcDistanciaEuclidiana();
    calcDistanciaEuclidiana(const calcDistanciaEuclidiana& orig);
    virtual ~calcDistanciaEuclidiana();
    
    int x1, y1, x2, y2; 
    
    void lerDados(); 
    float calcularDE(); 
    
private:

};

#endif /* CALCDISTANCIAEUCLIDIANA_H */

