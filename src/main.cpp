#include <iostream>

#include "../include/Server.hpp"

void show_err(std::string err)
{
    std::cout << err << std::endl;
    exit(0); 
}

int main(int argc, char **argv)
{
    if(argc != 3)
        show_err("Error Numero de argumentos");
    int port = std::stoi(argv[1]);
    std::string password = argv[2];
    if(port <= 1023)
        show_err("Error puerto invalido");
    if(port > 65535)
        show_err("Error numero puerto");
    if(!password.size())
    {
        show_err("Contraseña vacia");
    }

    Server server(port, password);
    server.setPass(password);
    server.setPort(port);

}