#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> nomes; // Cria um vector que guarda strings

    std::cout << "Adicionando 'Lincoln', 'Helio' e 'Marcos' ...\n";

    // Adicionando Elementos (O vector Cresce só)

    nomes.push_back("Lincoln"); //"[0]"
    nomes.push_back("Helio");   //"[1]"
    nomes.push_back("Marcos");  //"[2]"

    // Acessando os nomes pelo índice

    std::cout <<"O primeiro nome: " << nomes[0] << std::endl;
    std::cout <<"O segundo nome: "<< nomes[1] << std:: endl;
    std::cout <<"O terceiro nome: "<< nomes[2] << std:: endl;

    // Itera sobre todos 
    std::cout<< "Todos os nomes: " <<std::endl;
    for (const std::string&nome: nomes) {
        std::cout << "- " <<nome <<std::endl;
    }

    // Pergunta o tamanho
    std::cout << "Total de nomes: "<<nomes.size() <<std::endl;

}
