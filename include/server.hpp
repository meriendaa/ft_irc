/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:04:09 by amantara          #+#    #+#             */
/*   Updated: 2023/02/01 20:58:21 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP
# define SERVER_HPP

#include <iostream>

#include "./Config.hpp"


bool is_valid_args(int argc, char **argv);

class Server{
    private:
        std::string const host;
        std::string const serverName;
        int const  port;
        std::string const password;
        std::string const version;

    public:
        Server(int port, std::string password);
        ~Server();
        int getPort() const;
        std::string getPass() const;
        std::string getHost() const;
        std::string getServerName() const;
        std::string getVersion() const;
};


#endif