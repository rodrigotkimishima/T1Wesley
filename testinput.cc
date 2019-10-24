#include <iostream>

int main()
{
    const std::size_t MAX_LINE_SZ = 8191 ;
    char line[MAX_LINE_SZ];
    std::size_t pos;
    std::string str,substr;
    int graphId,K;
    
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
    std::cout << graphId << '\n' << K << '\n'; //Print verificacao ***RETIRAR DEPOIS***
    while( std::cin.getline( line, MAX_LINE_SZ ) ) // for each line read from stdin
    {   
        str = line;
        pos = str.find(" ");
        substr = str.substr(0,pos);
        int vertId = stoi(substr);
        std::cout << vertId << '\n';
        pos = str.find("--> ");
        while((pos = str.find(" ",pos+1)) != -1)
        {
            substr = str.substr(pos,str.find(" ",pos+1)-pos);
            int addAresta = stoi(substr);
            std::cout << addAresta << "\n";
        }
        std::cout << line << '\n' << '\n' ;
    }
    str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

  std::string str2 = str.substr (3,5);     // "think"

    pos = str.find(" ");      // position of "live" in str
    pos = str.find(" ",pos+1);
    pos = str.find(" ",pos+1);
    pos = str.find(" ",pos+1);
    pos = str.find(" ",pos+1);
    pos = str.find(" ",pos+1);
    pos = str.find(" ",pos+1);
    pos = str.find(" ",pos+1);    
    //pos = str.find(" ",pos+1);
  std::string str3 = str.substr (pos+1,str.find(" ",pos+1)-pos);     // get from "live" to the end
    if(pos == -1){
        std::cout << "siiiim eusogay";
    }
  std::cout << str2 << ' ' << str3 << 'a' <<'\n';

  return 0;
}