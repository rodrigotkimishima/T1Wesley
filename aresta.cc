#include"aresta.h"


aresta::aresta(int id1)
{
    id = id1;
    active = 1;
}
aresta::~aresta() {}

int aresta::getId()
{
    return id;
}