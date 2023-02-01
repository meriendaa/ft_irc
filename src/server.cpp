#include "../include/Server.hpp"


Server::Server(int port, std::string password)
{
    this->port = port;
    this->password = password;
}
Server::~Server(){}

std::string Server::getPass() const
{
    return(this->password);
}

int Server::getPort() const
{
    return(this->port);
}

void Server::setPass(std::string password)
{
    this->password = password;
}

void Server::setPort(int port)
{
    this->port = port;
}
