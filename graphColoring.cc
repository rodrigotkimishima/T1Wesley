#include"graphColoring.h"

void coloringGraph(graph *grafo)
{
    int K;
    std::list<bool> resultado;
    std::cout << "Graph " <<grafo->getId() << " -> Physical Registers: " << grafo->getRegFisicos() << "\n" << "----------------------------------------\n----------------------------------------\n";
    K = grafo->getK();
    while(K > 1)
    {
        std::list<vertice*> pilha;
        std::list<graph*>::iterator node;
        std::cout << "K = " << K << "\n";
        pilha = grafo->simplify(K);
        resultado.push_back(coloring(pilha, K));
        K--;
        std::cout << "\n----------------------------------------\n";
        grafo->resetGraph(K);
        pilha.clear();
    }
    std::cout << "----------------------------------------\n";
}

bool coloring(std::list<vertice*> pilha, int K)
{
    std::list<vertice*>::iterator node;
    vertice* aux;
    bool succesfull;
    for(node = pilha.begin(); node != pilha.end(); node++)
    {
        aux = *node;
        succesfull = 
    }
    return true;
}