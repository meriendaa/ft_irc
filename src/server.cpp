/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:03:56 by amantara          #+#    #+#             */
/*   Updated: 2023/02/01 20:03:58 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
