#ifndef _ARESTA_
#define _ARESTA_

#include<stdio.h>
#include<stdlib.h>

class aresta
{
    private:
        int id;
        bool active;
    
    public:
        aresta(int id1);
        ~aresta();
        int getId();
};

#endif