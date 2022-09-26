/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cAluno.h
 * Author: adils
 *
 * Created on 8 de outubro de 2021, 11:55
 */

#ifndef CALUNO_H
#define CALUNO_H

class cAluno {
public:
    
    float n1, n2, n3; 
    
    
    
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void lerDados(); 
    float mediaPonderada(); 
    
private:
    
};

#endif /* CALUNO_H */

