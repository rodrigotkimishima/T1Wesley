#include <iostream>
#include "graph.h"
#include "graphColoring.h"

int main()
{
    const std::size_t MAX_LINE_SZ = 8191 ;
    char line[MAX_LINE_SZ];
    std::size_t pos;
    std::string str,substr;
    int graphId,K,i;
    
    std::cin.getline( line, MAX_LINE_SZ);
    str = line;
    pos = str.find(" ");
    substr = str.substr(pos+1,str.find(":")-pos-1);
    graphId = stoi(substr); // Obtem ID do grafo
    std::cin.getline( line, MAX_LINE_SZ);
    str = line;
    pos = str.find("=");
    substr = str.substr(pos+1,str.find(" ")-pos-1);
    K = stoi(substr); // Obtem Valor de K
    //std::cout << graphId << '\n' << K << '\n'; //Print verificacao ***RETIRAR DEPOIS***
    graph *grafico = new graph(graphId, K);
    for(i = 0; i < K; i++)
    {
      grafico->addVertice(i, 0, K);
    }
    while( std::cin.getline( line, MAX_LINE_SZ ) ) // for each line read from stdin
    {   
        str = line;
        pos = str.find(" ");
        substr = str.substr(0,pos);
        int vertId = stoi(substr);
        vertice *newVertice = new vertice(vertId, K, K);
        //std::cout << newVertice->getId() << '\n';
        pos = str.find("--> ");
        while((pos = str.find(" ",pos+1)) != -1)
        {
            substr = str.substr(pos,str.find(" ",pos+1)-pos);
            int idAresta = stoi(substr);
            newVertice->addAresta(idAresta);
        }
        grafico->insertVertice(newVertice);
        //newVertice->showIdAresta();
        //std::cout << line << '\n' << '\n' ;
    }
    grafico->addInterferencias();
    coloringGraph(grafico);
    //grafico->showIdAresta();
    delete(grafico);
  return 0;
}