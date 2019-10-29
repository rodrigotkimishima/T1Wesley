#ifndef _VERTICE_
#define _VERTICE_

#include<stdio.h>
#include<stdlib.h>
#include<list>
#include<iterator>
#include<iostream>

class vertice
{
    private:
    int id;
    bool *cores;
    bool regFisico;
    int cor;
    bool ativo;
    int arestaQtd;
    std::list<int> arestas;
    std::list<vertice*> interferencias;
    
    public:
        vertice(int id1,int regFisicos, int K1);
        ~vertice();
        void addAresta(int id1);
        void setCor(bool color,int idcor);
        int getId();
        void showIdAresta();
        void resetVertice(int K);
        void addInterferencia(vertice *newVertice);
        std::list<int> getArestas();
        int sizeOfInterferencia();
        bool isActive();
        void setArestaQtd(int Qtd);
        int getArestaQtd();
        void setDisable();
        bool putColor(int K1);
        int getCor();
};

#endif
