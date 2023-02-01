/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:03:56 by amantara          #+#    #+#             */
/*   Updated: 2023/02/01 20:57:56 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Server.hpp"

Server::Server(int port, std::string password) 
    : host(IP_ADDRESS), serverName(SERVER_NAME), port(port), password(password), version(SERVER_VERSION)
{
    // Init server
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

std::string Server::getHost() const
{
    return(this->host);
}

std::string Server::getServerName() const
{
    return(this->serverName);
}

std::string Server::getVersion() const
{
    return(this->version);
}
